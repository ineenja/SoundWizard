#ifndef IPARAMETERS
#define IPARAMETERS

#include <cstring>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <math.h>

class IParameters
{
public:
    virtual ~IParameters() = default;

    virtual uint32_t getSignalID() const;

    virtual uint32_t getSignalType() const = 0;

    virtual float getDurationMS() const;
    virtual uint32_t getSignalLengthSamples() const;

    virtual float getBeginningTimeMS() const;
    virtual uint32_t getBeginningSampleN() const;

    virtual uint32_t getSampleRate() const;


protected:
    uint32_t SignalID;
    uint32_t SignalType;

    float DurationMS;
    uint32_t SignalLengthSamples;

    float BeginningTimeMS;
    uint32_t BeginningSampleN;

    uint32_t SampleRate;
};

#endif
