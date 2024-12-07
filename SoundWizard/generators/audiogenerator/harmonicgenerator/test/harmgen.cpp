#include <gtest/gtest.h>
#include <iostream>
#include "harmonicgenerator/harmgenerator.h"
#include "readfromfile/readfromfile.h"
#include "isignal/isignal.h"

TEST(HarmGenTest, GeneratorCreationSeparate) {

    HarmGenerator Check(440, 10, 44000, 1000, 7);

    ASSERT_EQ(Check.getSignalID(), 7);
}

TEST(HarmGenTest, GeneratorCreationWithParsing) {

    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\genfactory\\test\\TestGenParams1.txt";
    FileReader CheckFile = FileReader(FilePath); // копируем данные о сигналах из файлы в программу
    CheckFile.fillInformation();

    std::vector<std::shared_ptr<IParameters>> ParamsCheckVector = CheckFile.getSignalsParameters();

    std::vector<std::shared_ptr<IGenerator>> SignalsGenerators;

    for (const auto& obj : ParamsCheckVector){
        if(dynamic_cast<HarmParameters*>(obj.get())){
            float tempFreq = (dynamic_cast<HarmParameters*>(obj.get()))->getHarmFreq();
            float tempAmpl = (dynamic_cast<HarmParameters*>(obj.get()))->getHarmAmpl();
            uint32_t tempSampleRate = (obj.get())->getSampleRate();
            uint32_t tempDuration = (obj.get())->getSignalLengthSamples();
            uint32_t tempID = (obj.get())->getSignalID();

            SignalsGenerators.push_back(std::make_shared<HarmGenerator>(tempFreq, tempAmpl, tempSampleRate, tempDuration, tempID));
        }
    }

    EXPECT_TRUE(SignalsGenerators[0]);
    EXPECT_TRUE(SignalsGenerators[1]);
    EXPECT_EQ(SignalsGenerators.size(), 2);
}

TEST(HarmGenTest, CorrectTypeWithParsing) {

    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\genfactory\\test\\TestGenParams1.txt";
    FileReader CheckFile = FileReader(FilePath); // копируем данные о сигналах из файлы в программу
    CheckFile.fillInformation();

    std::vector<std::shared_ptr<IParameters>> ParamsCheckVector = CheckFile.getSignalsParameters();

    std::vector<std::shared_ptr<IGenerator>> SignalsGenerators;

    for (const auto& obj : ParamsCheckVector){
        if(dynamic_cast<HarmParameters*>(obj.get())){
            float tempFreq = (dynamic_cast<HarmParameters*>(obj.get()))->getHarmFreq();
            float tempAmpl = (dynamic_cast<HarmParameters*>(obj.get()))->getHarmAmpl();
            uint32_t tempSampleRate = (obj.get())->getSampleRate();
            uint32_t tempDuration = (obj.get())->getSignalLengthSamples();
            uint32_t tempID = (obj.get())->getSignalID();

            SignalsGenerators.push_back(std::make_shared<HarmGenerator>(tempFreq, tempAmpl, tempSampleRate, tempDuration, tempID));
        }
    }

    ASSERT_TRUE(dynamic_cast<HarmGenerator*>(SignalsGenerators[0].get()));
    ASSERT_TRUE(dynamic_cast<HarmGenerator*>(SignalsGenerators[1].get()));
    EXPECT_EQ(SignalsGenerators.size(), 2);
}

TEST(HarmGenTest, SignalsCreationWithParsing) {

    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\genfactory\\test\\TestGenParams1.txt";
    FileReader CheckFile = FileReader(FilePath); // копируем данные о сигналах из файлы в программу
    CheckFile.fillInformation();

    std::vector<std::shared_ptr<IParameters>> ParamsCheckVector = CheckFile.getSignalsParameters();

    std::vector<std::shared_ptr<IGenerator>> SignalsGenerators;

    for (const auto& obj : ParamsCheckVector){
        if(dynamic_cast<HarmParameters*>(obj.get())){
            float tempFreq = (dynamic_cast<HarmParameters*>(obj.get()))->getHarmFreq();
            float tempAmpl = (dynamic_cast<HarmParameters*>(obj.get()))->getHarmAmpl();
            uint32_t tempSampleRate = (obj.get())->getSampleRate();
            uint32_t tempDuration = (obj.get())->getSignalLengthSamples();
            uint32_t tempID = (obj.get())->getSignalID();

            SignalsGenerators.push_back(std::make_shared<HarmGenerator>(tempFreq, tempAmpl, tempSampleRate, tempDuration, tempID));
        }
    }

    std::vector<std::shared_ptr<ISignal>> TestSignals;

    for (const auto& obj : SignalsGenerators){
        if(dynamic_cast<HarmGenerator*>(obj.get())){
            std::vector<float> Signal = {dynamic_cast<HarmGenerator*>(obj.get())->GenerateSignal()};
            uint32_t SignalID = obj->getSignalID();
            TestSignals.push_back(std::make_shared<AudioSignal>(Signal, SignalID));
        }
    }

//    ASSERT_TRUE(TestSignals[0]);
//    ASSERT_TRUE(TestSignals[1]);
    EXPECT_EQ(TestSignals.size(), 2);
}

TEST(HarmGenTest, SignalsTypeWithParsing) {

    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\genfactory\\test\\TestGenParams1.txt";
    FileReader CheckFile = FileReader(FilePath); // копируем данные о сигналах из файлы в программу
    CheckFile.fillInformation();

    std::vector<std::shared_ptr<IParameters>> ParamsCheckVector = CheckFile.getSignalsParameters();

    std::vector<std::shared_ptr<IGenerator>> SignalsGenerators;

    for (const auto& obj : ParamsCheckVector){
        if(dynamic_cast<HarmParameters*>(obj.get())){
            float tempFreq = (dynamic_cast<HarmParameters*>(obj.get()))->getHarmFreq();
            float tempAmpl = (dynamic_cast<HarmParameters*>(obj.get()))->getHarmAmpl();
            uint32_t tempSampleRate = (obj.get())->getSampleRate();
            uint32_t tempDuration = (obj.get())->getSignalLengthSamples();
            uint32_t tempID = (obj.get())->getSignalID();

            SignalsGenerators.push_back(std::make_shared<HarmGenerator>(tempFreq, tempAmpl, tempSampleRate, tempDuration, tempID));
        }
    }

    std::vector<std::shared_ptr<ISignal>> TestSignals;

    for (const auto& obj : SignalsGenerators){
        if(dynamic_cast<HarmGenerator*>(obj.get())){
            std::vector<float> Signal = {dynamic_cast<HarmGenerator*>(obj.get())->GenerateSignal()};
            uint32_t SignalID = obj->getSignalID();
            TestSignals.push_back(std::make_shared<AudioSignal>(Signal, SignalID));
        }
    }

    ASSERT_TRUE(dynamic_cast<AudioSignal*>(TestSignals[0].get()));
    ASSERT_TRUE(dynamic_cast<AudioSignal*>(TestSignals[1].get()));
    EXPECT_EQ(TestSignals.size(), 2);
}

TEST(HarmGenTest, SignalParametersCheck) {

    float SampleFreq = 440;
    float SampleAmpl = 10;
    uint32_t SampleRate = 44000;
    uint32_t SampleDuration = 44000;
    uint32_t SampleSignalID = 7;

    HarmGenerator Check(SampleFreq, SampleAmpl, SampleRate, SampleDuration, SampleSignalID);
    std::vector<float> OriginalSamples = Check.GenerateSignal();
    AudioSignal CheckSignal(OriginalSamples, Check.getSignalID());
    std::vector<float> CheckSamples(CheckSignal.getSignal());

    EXPECT_EQ(SampleDuration, CheckSamples.size());

    float CheckMaxValue = *std::max_element(begin(CheckSamples), end(CheckSamples));
    EXPECT_EQ(SampleAmpl, CheckMaxValue);
}


TEST(HarmGenTest, SignalSamplesCheck) {

    HarmGenerator Check(440, 10, 44000, 1000, 7);

    std::vector<float> OriginalSamples = Check.GenerateSignal();

    AudioSignal CheckSignal(OriginalSamples, Check.getSignalID());

    std::vector<float> CheckSamples(CheckSignal.getSignal());

    ASSERT_EQ(CheckSamples, OriginalSamples);

    float tempCheckValue = round(CheckSamples[241]*1000);
    EXPECT_EQ(tempCheckValue, -8443);

    tempCheckValue = round(CheckSamples[524]*1000);
    EXPECT_EQ(tempCheckValue, 628);

    tempCheckValue = round(CheckSamples[129]*1000);
    EXPECT_EQ(tempCheckValue, -2487);
}


