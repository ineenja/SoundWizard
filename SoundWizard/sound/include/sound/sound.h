#ifndef HARMPARAMETERS
#define HARMPARAMETERS

#include "genfactory/genfactory.h"
#include "writetofile/writetofile.h"
#include "signal/signal.h"

class Sound
{
public:
    Sound(std::string InfoFileName); // конструктор получает информацию из файла и заполняет вектор параметров

    ~Sound() = default;

    void GenerateSoundFile();

    std::vector<std::shared_ptr<const IGenerator>> getSignalGenerators() const;

    std::vector<std::shared_ptr<IParameters>> getSignalParameters() const;

    std::vector<std::shared_ptr<const Signal>> getSignals() const;

    std::vector<float> getResultingSignal() const;

private:
    FileReader SignalInfo; // атрибут - объект парсера
    std::string InfoFileName; // строка с названием файла с исходной информацией

    std::vector<std::shared_ptr<IParameters>> SignalParameters; // вектор параметров сигналов

    std::vector<std::shared_ptr<const IGenerator>> SignalGenerators; // вектор генераторов сигналов

    std::vector<std::shared_ptr<const Signal>> Signals; // вектор сигналов

    std::vector<float> ResultingSignal; // вектор отсчетов звуковой дорожки

    void CreateGenerators(); // внутренняя функция создания генераторов сигналов

    void SignalGeneration(); // внутр. ф-я генерации сигналов

    void SignalsAddition(); // функция складывающая сигналы вместе в один вектор
};

#endif
