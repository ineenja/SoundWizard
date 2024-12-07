#include "genfactory/genfactory.h"
#include "writetofile/writetofile.h"


int main()
{
    // ПАРСИНГ - ЧТЕНИЕ ИЗ ФАЙЛА
    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\info.txt";

    FileReader signalInfo = FileReader(FilePath); // Копируем данные о сигналах из файлы в программу
    signalInfo.fillInformation(); // Достаем информацию из скопированных данных и создаем объекты с параметрами сигналов

    // ВЕКТОР ПАРАМЕТРОВ СИГНАЛОВ
    std::vector<std::shared_ptr<IParameters>> SignalParameters = signalInfo.getSignalsParameters();

    // ФАБРИКА ГЕНЕРАТОРОВ СИГНАЛОВ
    GeneratorsFactory signalGeneratorsFactory = GeneratorsFactory(SignalParameters); // Вызываем фабрику генераторов этих сигналов
    std::vector<std::shared_ptr<IGenerator>> SignalGenerators = signalGeneratorsFactory.getSignalsGenerators(); // Получаем от фабрики вектор генераторов сигналов

    // ГЕНЕРАЦИЯ СИГНАЛОВ
    std::vector<std::shared_ptr<ISignal>> Signals; // Объявление вектора генерируемых сигналов
    for (const auto& obj : SignalGenerators){ // Перебор всех созданных генераторов
        uint32_t SignalID = obj->getSignalID(); // Получаем идентификационный номер генерируемого i-го сигнала
        Signals.push_back(std::make_shared<AudioSignal>((dynamic_cast<HarmGenerator*>(obj.get())->GenerateSignal()), SignalID)); // Генерирование i-го сигнала
    }

    // СОВМЕЩЕНИЕ ВСЕХ СИГНАЛОВ В ОДИН ВЕКТОР
    uint32_t WAVLengthSamples = signalInfo.getWAVTotalSampleCount(); // Получение числа отсчетов в полном WAV файле

    std::vector<float> ResultingSignal(WAVLengthSamples, 0.0f);

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
                ResultingSignal[i + CurrentSigBeginningSample] += CurrentSignalTemp[i];
            }
        }
    }

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

    std::string SavePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\music.wav";

    WavSaver saver = WavSaver(ResultingSignalShort, WAVLengthSamples, signalInfo.getSampleRate(), SavePath);




}
