#ifndef READFROMFILE
#define READFROMFILE

#include <vector>
#include <cstring>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <memory>

#include "iparameters/iparameters.h"
#include "harmparameters/harmparameters.h"

class FileReader
{
public:
    FileReader(std::string FilePath);

    ~FileReader() = default;

    uint32_t getFileLength() const;

    std::vector<std::string> getFileStrings() const;

    std::vector<std::shared_ptr<IParameters>> getSignalsParameters() const;

    void fillInformation(); // в приватную секцию, переименовать в другое

    float getWavDuration() const;

    uint32_t getWAVTotalSampleCount() const;

    uint32_t getSampleRate() const;

    float getDuration() const;

    float getAmpl() const;

    float getStartingTime() const;

    float getFreq() const;

    std::string getSignalType() const;

    uint32_t getSignalID() const;


private:
    std::vector<std::string> FileStrings;

    std::vector<std::shared_ptr<IParameters>> SignalsParameters;

    uint32_t FileLength;

    //wav file properties
    float WavDuration;
    uint32_t SampleRate;

    //signal properties
    float Duration;
    float Ampl;
    float StartingTime;
    float Freq;
    std::string SignalType;
    uint32_t SignalID = 0;

};

#endif
