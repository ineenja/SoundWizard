#include "audiosignal.h"

AudioSignal::AudioSignal(std::vector<float> SignalSamples, uint32_t SignalID){
    AudioSignalSamples = SignalSamples;
    this->SignalID = SignalID;

}

std::vector<float> AudioSignal::getSignal(){
    return AudioSignalSamples;
}
