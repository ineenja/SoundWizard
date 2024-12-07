#ifndef HARMGENERATOR
#define HARMGENERATOR

#include "audiogenerator/audiogenerator.h"

#include "harmparameters/harmparameters.h"

class HarmGenerator : public AudioGenerator
{
public:
    HarmGenerator(float Freq, float Ampl, uint32_t SampleRate, uint32_t Duration, uint32_t SignalID);

    ~HarmGenerator() = default;

    std::vector<float> GenerateSignal() override;

private:
    float HarmFreq;
    float HarmAmpl;
};

#endif
