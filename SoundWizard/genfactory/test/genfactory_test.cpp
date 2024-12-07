#include <gtest/gtest.h>
#include <iostream>
#include "genfactory/genfactory.h"


TEST(GenFactoryTests, CreationOfGenerators) {

    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\genfactory\\test\\TestGenParams1.txt";
    FileReader CheckFile = FileReader(FilePath); // копируем данные о сигналах из файлы в программу
    CheckFile.fillInformation();

    std::vector<std::shared_ptr<IParameters>> ParamsCheckVector = CheckFile.getSignalsParameters();

    GeneratorsFactory SignalGenerators = GeneratorsFactory(ParamsCheckVector); // вызываем фабрику генераторов этих сигналов

    std::vector<std::shared_ptr<IGenerator>> GensToCheck = SignalGenerators.getSignalsGenerators();

    EXPECT_TRUE(GensToCheck[0]);
    EXPECT_TRUE(GensToCheck[1]);
    EXPECT_EQ(GensToCheck.size(), 2);
}

TEST(GenFactoryTests, TypesOfGenerators) {

    std::string FilePath = "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\genfactory\\test\\TestGenParams1.txt";
    FileReader CheckFile = FileReader(FilePath); // копируем данные о сигналах из файлы в программу
    CheckFile.fillInformation();

    std::vector<std::shared_ptr<IParameters>> ParamsCheckVector = CheckFile.getSignalsParameters();

    GeneratorsFactory SignalGenerators = GeneratorsFactory(ParamsCheckVector); // вызываем фабрику генераторов этих сигналов

    std::vector<std::shared_ptr<IGenerator>> GensToCheck = SignalGenerators.getSignalsGenerators();

    ASSERT_TRUE(dynamic_cast<HarmGenerator*>(GensToCheck[0].get()));
    ASSERT_TRUE(dynamic_cast<HarmGenerator*>(GensToCheck[1].get()));
}



