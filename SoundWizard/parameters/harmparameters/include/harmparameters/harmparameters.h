#ifndef HARMPARAMETERS
#define HARMPARAMETERS

#include "iparameters/iparameters.h"

class HarmParameters : public IParameters
{
public:
    HarmParameters(float Ampl, float Freq, float BeginningTime, float Duration, uint32_t SampleRate, uint32_t HarmID);

    float getHarmAmpl() const;
    float getHarmFreq() const;

    uint32_t getSignalType() const override{
        return 1;
    }

    ~HarmParameters() = default;

private:
    float HarmAmpl;
    float HarmFreq;
};

#endif
