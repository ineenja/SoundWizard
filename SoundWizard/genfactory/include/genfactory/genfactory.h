#ifndef GENFACTORY
#define GENFACTORY

#include "readfromfile/readfromfile.h"
#include "igenerator/igenerator.h"
#include "harmonicgenerator/harmgenerator.h"

class GeneratorsFactory
{
public:
    GeneratorsFactory(const std::vector<std::shared_ptr<IParameters>>& SignalsParameters);

    ~GeneratorsFactory() = default;

    std::vector<std::shared_ptr<IGenerator>> getSignalsGenerators() const;

private:
    std::vector<std::shared_ptr<IGenerator>> SignalsGenerators;
};


#endif
