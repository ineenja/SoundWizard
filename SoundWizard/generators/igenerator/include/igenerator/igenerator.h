#ifndef IGENERATOR
#define IGENERATOR

#include <cstdint>
#include <vector>
#include "iparameters/iparameters.h"
#include "readfromfile/readfromfile.h"

class IGenerator
{
public:

    virtual uint32_t getSignalID() const{
        return SignalID;
    }

    virtual std::vector<float> GenerateSignal() const = 0;

protected:
    uint32_t SampleRate;
    uint32_t DurationInSamples;
    uint32_t SignalID;
};

#endif
