#ifndef AUDIOGENERATOR
#define AUDIOGENERATOR

#include "igenerator/igenerator.h"
#include "audiosignal/audiosignal.h"

class AudioGenerator : public IGenerator
{
public:

    virtual ~AudioGenerator() = default;

    virtual std::vector<float> GenerateSignal() = 0;

private:
};



#endif
