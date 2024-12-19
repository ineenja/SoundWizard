#ifndef SIGNAL
#define SIGNAL

#include <cstdint>
#include <vector>

class Signal
{
public:
    ~Signal() = default;

    Signal(std::vector<float> SignalSamples, uint32_t SignalID);

    std::vector<float> getSignal() const;

    uint32_t getSignalID() const;

protected:
    uint32_t SignalID;
    std::vector<float> SignalSamples;
};



#endif

