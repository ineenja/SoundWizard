#ifndef IGENERATOR
#define IGENERATOR

#include <cstdint>
#include <vector>
#include "isignal/isignal.h"
#include "iparameters/iparameters.h"
#include "readfromfile/readfromfile.h"

class IGenerator
{
public:

    virtual uint32_t getSignalID(){
        return SignalID;
    }

protected:
    uint32_t SampleRate;
    uint32_t DurationInSamples;
    uint32_t SignalID;
};

#endif
