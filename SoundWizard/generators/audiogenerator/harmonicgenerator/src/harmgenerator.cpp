#include "harmonicgenerator/harmgenerator.h"

//ISignal* HarmGenerator::GenerateSignal() {

//}


HarmGenerator::HarmGenerator(float Freq, float Ampl, uint32_t SampleRate, uint32_t Duration, uint32_t SignalID){
    HarmFreq = Freq;
    HarmAmpl = Ampl;
    this->SampleRate = SampleRate;
    DurationInSamples = Duration;
    this->SignalID = SignalID;
}

std::vector<float> HarmGenerator::GenerateSignal(){
    std::vector<float> SignalSamples;

    float DerivedFreq = 2 * M_PI * HarmFreq / SampleRate;

    for(unsigned int i = 0; i < DurationInSamples; i++)
    {
        SignalSamples.push_back(HarmAmpl * cosf(DerivedFreq * i));
    }

    return SignalSamples;
}
