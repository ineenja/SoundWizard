#ifndef AUDIOSIGNAL
#define AUDIOSIGNAL

#include "isignal/isignal.h"

class AudioSignal : public ISignal
{
public:

    ~AudioSignal() = default;

    AudioSignal(std::vector<float> SignalSamples, uint32_t SignalID);

    std::vector<float> getSignal() override;

private:
    std::vector<float> AudioSignalSamples;
};



#endif
