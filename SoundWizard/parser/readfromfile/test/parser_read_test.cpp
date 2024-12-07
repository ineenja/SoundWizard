#include <gtest/gtest.h>
#include <iostream>
#include "readfromfile/readfromfile.h"

TEST(ParserTestsReading, ReadingFromFile) {

    std::vector<std::string> Sample;
    Sample.push_back("123");
    Sample.push_back("456");
    Sample.push_back("789");

    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\parser\\readfromfile\\test\\TestReading.txt";
    FileReader Check = FileReader(FilePath); // копируем данные о сигналах из файлы в программу

    std::vector<std::string> ToCheck = Check.getFileStrings();

    ASSERT_EQ(ToCheck,Sample);
}

TEST(ParserTestsReading, WAVDurationInterpretation) {

    float Sample = 1;

    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\parser\\readfromfile\\test\\TestInterpreting.txt";
    FileReader Check = FileReader(FilePath); // копируем данные о сигналах из файлы в программу
    Check.fillInformation();

    float ToCheck = Check.getWavDuration();

    ASSERT_EQ(ToCheck,Sample);
}

TEST(ParserTestsReading, SampleRateInterpretation) {

    float Sample = 44100;

    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\parser\\readfromfile\\test\\TestInterpreting.txt";
    FileReader Check = FileReader(FilePath); // копируем данные о сигналах из файлы в программу
    Check.fillInformation();

    float ToCheck = Check.getSampleRate();

    ASSERT_EQ(ToCheck,Sample);
}

TEST(ParserTestsReading, SignalInfoInterpretation) {

    std::vector<float> Sample = {2, 3, 4, 5}; //{duration, ampl, starttime, freq}


    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\parser\\readfromfile\\test\\TestInterpreting.txt";
    FileReader Check = FileReader(FilePath); // копируем данные о сигналах из файлы в программу
    Check.fillInformation();

    std::vector<float> ToCheck = {Check.getDuration(), Check.getAmpl(), Check.getStartingTime(), Check.getFreq()};

    ASSERT_EQ(ToCheck,Sample);
}

TEST(ParserTestsReading, SignalTypeInterpretation) {

    std::string Sample = "harm";

    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\parser\\readfromfile\\test\\TestInterpreting.txt";
    FileReader Check = FileReader(FilePath); // копируем данные о сигналах из файлы в программу
    Check.fillInformation();

    std::string ToCheck = Check.getSignalType();

    ASSERT_EQ(ToCheck,Sample);
}

TEST(ParserTestsReading, SignalIDInterpretation) {

    uint32_t Sample = 1;

    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\parser\\readfromfile\\test\\TestInterpreting.txt";
    FileReader Check = FileReader(FilePath); // копируем данные о сигналах из файлы в программу
    Check.fillInformation();

    uint32_t ToCheck = Check.getSignalID();

    ASSERT_EQ(ToCheck,Sample);
}

TEST(ParserTestsReading, CreatedParametersType) {

    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\parser\\readfromfile\\test\\TestInterpreting2.txt";
    FileReader Check = FileReader(FilePath); // копируем данные о сигналах из файлы в программу
    Check.fillInformation();

    std::vector<std::shared_ptr<IParameters>> ToCheck = Check.getSignalsParameters();

    ASSERT_TRUE(ToCheck[0]);
    ASSERT_TRUE(ToCheck[1]);
    EXPECT_EQ(ToCheck.size(), 2);

    ASSERT_TRUE(dynamic_cast<HarmParameters*>(ToCheck[0].get()));
    ASSERT_TRUE(dynamic_cast<HarmParameters*>(ToCheck[1].get()));

    ASSERT_EQ(ToCheck[0]->getSignalType(), 1);
    ASSERT_EQ(ToCheck[1]->getSignalType(), 1);
}

TEST(ParserTestsReading, CreatedParametersCheck) {

    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\parser\\readfromfile\\test\\TestInterpreting2.txt";
    FileReader Check = FileReader(FilePath); // копируем данные о сигналах из файлы в программу
    Check.fillInformation();

    std::vector<std::shared_ptr<IParameters>> ToCheck = Check.getSignalsParameters();

    //Ampl, Freq, StartingTime, Duration, SampleRate, SignalID
    ASSERT_TRUE(ToCheck[0]);
    ASSERT_TRUE(ToCheck[1]);
    EXPECT_EQ(ToCheck.size(), 2);

    float SampleDurationMS = 2;
    EXPECT_EQ(ToCheck[0]->getDurationMS(), SampleDurationMS);
    SampleDurationMS = 6;
    EXPECT_EQ(ToCheck[1]->getDurationMS(), SampleDurationMS);

    float SampleHarmAmpl = 3;
    EXPECT_EQ((dynamic_cast<HarmParameters*>(ToCheck[0].get()))->getHarmAmpl(), SampleHarmAmpl);
    SampleHarmAmpl = 7;
    EXPECT_EQ((dynamic_cast<HarmParameters*>(ToCheck[1].get()))->getHarmAmpl(), SampleHarmAmpl);

    float SampleStartingTime = 4;
    EXPECT_EQ((dynamic_cast<HarmParameters*>(ToCheck[0].get()))->getBeginningTimeMS(), SampleStartingTime);
    SampleStartingTime = 8;
    EXPECT_EQ((dynamic_cast<HarmParameters*>(ToCheck[1].get()))->getBeginningTimeMS(), SampleStartingTime);

    float SampleFreq = 5;
    EXPECT_EQ((dynamic_cast<HarmParameters*>(ToCheck[0].get()))->getHarmFreq(), SampleFreq);
    SampleFreq = 9;
    EXPECT_EQ((dynamic_cast<HarmParameters*>(ToCheck[1].get()))->getHarmFreq(), SampleFreq);

    uint32_t SampleSampleRate = 44100;
    EXPECT_EQ((dynamic_cast<HarmParameters*>(ToCheck[0].get()))->getSampleRate(), SampleSampleRate);
    EXPECT_EQ((dynamic_cast<HarmParameters*>(ToCheck[1].get()))->getSampleRate(), SampleSampleRate);

    uint32_t SampleSignalID = 1;
    EXPECT_EQ(ToCheck[0]->getSignalID(), SampleSignalID);
    SampleSignalID = 2;
    EXPECT_EQ(ToCheck[1]->getSignalID(), SampleSignalID);

}








