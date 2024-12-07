#ifndef ISIGNAL
#define ISIGNAL

#include <cstdint>
#include <vector>

class ISignal
{
public:
    virtual ~ISignal() = default;

    virtual std::vector<float> getSignal() = 0;

    virtual uint32_t getSignalID() const{
        return SignalID;
    }

protected:
    uint32_t SignalID;

};



#endif

