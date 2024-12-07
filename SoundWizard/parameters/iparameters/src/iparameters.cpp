#include "iparameters.h"

uint32_t IParameters::getSignalID() const {
    return SignalID;
}


//uint32_t IParameters::getSampleByteSize() const {
//    return SampleByteSize;
//}

float IParameters::getDurationMS() const {
    return DurationMS;
}

uint32_t IParameters::getSignalLengthSamples() const {
    return SignalLengthSamples;
}

float IParameters::getBeginningTimeMS() const {
    return BeginningTimeMS;
}

uint32_t IParameters::getBeginningSampleN() const {
    return BeginningSampleN;
}

uint32_t IParameters::getSampleRate() const {
    return SampleRate;
}




