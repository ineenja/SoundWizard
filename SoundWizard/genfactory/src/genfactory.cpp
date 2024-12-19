#include "genfactory.h"


GeneratorsFactory::GeneratorsFactory(const std::vector<std::shared_ptr<IParameters>>& SignalsParameters){
    for (const auto& obj : SignalsParameters){

        if(dynamic_cast<HarmParameters*>(obj.get())){
            //float Freq, float Ampl, uint32_t SampleRate, uint32_t Duration, uint32_t SignalID
            float tempFreq = (dynamic_cast<HarmParameters*>(obj.get()))->getHarmFreq();
            float tempAmpl = (dynamic_cast<HarmParameters*>(obj.get()))->getHarmAmpl();
            uint32_t tempSampleRate = (obj.get())->getSampleRate();
            uint32_t tempDuration = (obj.get())->getSignalLengthSamples();
            uint32_t tempID = (obj.get())->getSignalID();

            SignalsGenerators.push_back(std::make_shared<HarmGenerator>(tempFreq, tempAmpl, tempSampleRate, tempDuration, tempID));
        }

//        switch (Type) {
//            case (1): SignalsGenerators.push_back(std::make_shared<HarmGenerator>());
//            //case (2): return new GuitarGenerator;

//        }
    }
}

std::vector<std::shared_ptr<const IGenerator>> GeneratorsFactory::getSignalsGenerators() const{
    return SignalsGenerators;
}
