#include "signal.h"

std::vector<float> Signal::getSignal() const{
    return SignalSamples;
}

uint32_t Signal::getSignalID() const{
    return SignalID;
}

Signal::Signal(std::vector<float> SignalSamples, uint32_t SignalID){
    this->SignalSamples = SignalSamples;
    this->SignalID = SignalID;

}
