#include "sound.h"


Sound::Sound(std::string InfoFileName) : SignalInfo(InfoFileName){
    this->InfoFileName = InfoFileName;

    // ПАРСИНГ - ЧТЕНИЕ ИЗ ФАЙЛА
    SignalInfo.fillInformation(); // Достаем информацию из скопированных данных и создаем объекты с параметрами сигналов

    // ВЕКТОР ПАРАМЕТРОВ СИГНАЛОВ
    SignalParameters = SignalInfo.getSignalsParameters();

    CreateGenerators();
}


void Sound::GenerateSoundFile(){
    SignalGeneration(); // генерируем вектор сигналов

    SignalsAddition(); // складываем вместе сгенерированные сигналы

    uint32_t WAVLengthSamples = SignalInfo.getWAVTotalSampleCount();

    // ПЕРЕВОД ПОЛУЧЕННОГО ВЕКТОРА ИЗ ВСЕХ СИГНАЛОВ ИЗ FLOAT В SHORT

    float ResultSigMaxValue = 0;

    for(size_t i = 0; i < ResultingSignal.size(); i++){ // Ищем максимум в результ. сигнале
        if (ResultSigMaxValue < abs(ResultingSignal[i])){
            ResultSigMaxValue = abs(ResultingSignal[i]);
        }
    }

    float m = __SHRT_MAX__ / ResultSigMaxValue;

    short int* ResultingSignalShort = new short[WAVLengthSamples*sizeof(short)]; // Объявляем результирующий массив в типе short int
    ResultingSignalShort[0] = 0;

    for(size_t i = 0; i < ResultingSignal.size(); i++)
    {
        ResultingSignalShort[i] = static_cast<short int>(round(ResultingSignal[i] * m));
    }

    // ПАРСИНГ - ЗАПИСЬ В ФАЙЛ

    std::string FileName = "music.wav";

    WavSaver saver = WavSaver(ResultingSignalShort, WAVLengthSamples, SignalInfo.getSampleRate(), FileName);

}


void Sound::CreateGenerators(){
    // СОЗДАЕТСЯ ФАБРИКА ГЕНЕРАТОРОВ СИГНАЛОВ
    GeneratorsFactory SignalGeneratorsFactory = GeneratorsFactory(SignalParameters); // Вызываем фабрику генераторов этих сигналов
    SignalGenerators = SignalGeneratorsFactory.getSignalsGenerators(); // Получаем от фабрики вектор генераторов сигналов
}


void Sound::SignalGeneration(){
    // ЗАПОЛНЕНИЕ ВЕКТОРА СИГНАЛОВ ИСПОЛЬЗУЯ ВЕКТОР ГЕНЕРАТОРОВ
    for (const auto& obj : SignalGenerators){ // Перебор всех созданных генераторов
        uint32_t SignalID = obj->getSignalID(); // Получаем идентификационный номер генерируемого i-го сигнала
        Signals.push_back(std::make_shared<Signal>(obj.get()->GenerateSignal(), SignalID)); // Генерирование i-го сигнала
    }
}


void Sound::SignalsAddition(){
    // СОВМЕЩЕНИЕ ВСЕХ СИГНАЛОВ В ОДИН ВЕКТОР
    uint32_t WAVLengthSamples = SignalInfo.getWAVTotalSampleCount(); // Получение числа отсчетов в полном WAV файле

    std::vector<float> ResultingSignalTemp(WAVLengthSamples, 0.0f);

    for (const auto& sig : Signals){ // Перебор всех созданных сигналов
        uint32_t CurrentSigID = sig.get()->getSignalID(); // Получаем идент. номер текущего обрататываемого сигнала

        uint32_t CurrentSigBeginningSample = 0;
        uint32_t CurrentSigLengthSamples = 0;

        for (const auto& par : SignalParameters){ // Перебор всех объектов - параметров сигналов
            if (par->getSignalID() == CurrentSigID){ // Поиск объекта содержащего параметры обрабатываемого сигнала
                CurrentSigBeginningSample = par->getBeginningSampleN(); // Заполнение нужных данных - начального отсчета
                CurrentSigLengthSamples = par->getSignalLengthSamples(); // Заполнение нужных данных - длины в отчетах
                break; // Когда нужная информация получена, досрочно заканчиваем перебор всех объектов - параметров
            }
        }

        std::vector<float> CurrentSignalTemp = sig->getSignal();

        for(uint32_t i = 0; i < CurrentSigLengthSamples; i++){
            if (WAVLengthSamples >= i + CurrentSigBeginningSample){ // Проверка на нахождение внутри массива полного сигнала
                ResultingSignalTemp[i + CurrentSigBeginningSample] += CurrentSignalTemp[i];
            }
        }
    }

    ResultingSignal = ResultingSignalTemp;
}

std::vector<std::shared_ptr<const IGenerator>> Sound::getSignalGenerators() const{
    return SignalGenerators;
}

std::vector<std::shared_ptr<IParameters>> Sound::getSignalParameters() const{
    return SignalParameters;
}

std::vector<std::shared_ptr<const Signal>> Sound::getSignals() const{
    return Signals;
}

std::vector<float> Sound::getResultingSignal() const{
    return ResultingSignal;
}
