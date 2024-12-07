#include "readfromfile.h"

//#define FILE_PATH "C:\\Users\\theiz\\OneDrive\\Desktop\\EngPathStuff\\cppSTC\\SoundWizardTop\\SoundWizard\\info.txt"

FileReader::FileReader(std::string FilePath)
{
    std::fstream file;
    file.open(FilePath, std::ios::in | std::ios::out);

    if (file.is_open()){

        std::string s;
        unsigned int i = 0;

        while(std::getline(file, s))
        {
            FileStrings.push_back(s);
            i++;
        }

        FileLength = i;
    }

    file.close();
}

uint32_t FileReader::getFileLength() const{
    return FileLength;
}

uint32_t FileReader::getWAVTotalSampleCount() const{
    return uint32_t(floor(WavDuration * SampleRate / 1000));
}

std::vector<std::string> FileReader::getFileStrings() const{
    return FileStrings;
}

std::vector<std::shared_ptr<IParameters>> FileReader::getSignalsParameters() const{
    return SignalsParameters;
}

void FileReader::fillInformation(){

    enum PositionHead{
        WAVDUR, // 0
        WAVSR,  // 1
    };

    WavDuration = std::stof(FileStrings[WAVDUR]);
    SampleRate = std::stoi(FileStrings[WAVSR]);

    enum PositionHarm{
        HTYPE, // 0
        HDUR,  // 1
        HAMPL, // 2
        HSTIME,// 3
        HFREQ, // 4
    };

    for (unsigned int i = 2; i < FileLength; i++){ // ENUMERATORS OR DEFINES TO SET STRING NUMBERS
        if (FileStrings[i] == "harm"){
            SignalType = FileStrings[i + HTYPE];
            Duration = std::stof(FileStrings[i + HDUR]);
            Ampl = std::stof(FileStrings[i + HAMPL]);
            StartingTime = std::stof(FileStrings[i + HSTIME]);
            Freq = std::stof(FileStrings[i + HFREQ]);
            SignalID++;

            SignalsParameters.push_back(std::make_shared<HarmParameters>(Ampl, Freq, StartingTime, Duration, SampleRate, SignalID));
            i += 4;
        }

    }
}

float FileReader::getWavDuration() const{
    return WavDuration;
}

uint32_t FileReader::getSampleRate() const{
    return SampleRate;
}

float FileReader::getDuration() const{
    return Duration;
}

float FileReader::getAmpl() const{
    return Ampl;
}

float FileReader::getStartingTime() const{
    return StartingTime;
}

float FileReader::getFreq() const{
    return Freq;
}

std::string FileReader::getSignalType() const{
    return SignalType;
}

uint32_t FileReader::getSignalID() const{
    return SignalID;
}

