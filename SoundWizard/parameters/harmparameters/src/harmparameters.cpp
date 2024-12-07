#include "harmparameters.h"


HarmParameters::HarmParameters(float Ampl, float Freq, float BeginningTime, float Duration, uint32_t SampleRate, uint32_t HarmID){
    HarmAmpl = Ampl;
    HarmFreq = Freq;
    BeginningTimeMS = BeginningTime;
    DurationMS = Duration;
    SignalID = HarmID;
    this->SampleRate = SampleRate;

    SignalType = 1; // Значение SignalType равное 1 означает что это гармонический сигнал

    SignalLengthSamples = uint32_t(floor(DurationMS * SampleRate / 1000));
    BeginningSampleN = uint32_t(floor(BeginningTimeMS / DurationMS * SignalLengthSamples));
}


float HarmParameters::getHarmAmpl() const{
    return HarmAmpl;
}

float HarmParameters::getHarmFreq() const{
    return HarmFreq;
}

