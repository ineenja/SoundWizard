#include <gtest/gtest.h>
#include "sound/sound.h"


TEST(MainTests, GeneratorsCheck) {

    Sound MySound = Sound("TestInterpreting3.txt");

    std::vector<std::shared_ptr<const IGenerator>> ToCheck = MySound.getSignalGenerators();

    ASSERT_TRUE(ToCheck[0]);
    ASSERT_TRUE(ToCheck[1]);
    EXPECT_EQ(ToCheck.size(), 2);
}

TEST(MainTests, ParametersCheck) {

    Sound MySound = Sound("TestInterpreting3.txt");

    std::vector<std::shared_ptr<IParameters>> ToCheck = MySound.getSignalParameters();

    ASSERT_TRUE(ToCheck[0]);
    ASSERT_TRUE(ToCheck[1]);
    EXPECT_EQ(ToCheck.size(), 2);
}

TEST(MainTests, SignalsCheck) {

    Sound MySound = Sound("TestInterpreting3.txt");
    MySound.GenerateSoundFile();

    std::vector<std::shared_ptr<const Signal>> ToCheck = MySound.getSignals();

    ASSERT_TRUE(ToCheck[0]);
    ASSERT_TRUE(ToCheck[1]);
    EXPECT_EQ(ToCheck.size(), 2);
}


