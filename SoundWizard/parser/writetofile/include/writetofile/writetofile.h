#ifndef WRITETOFILE
#define WRITETOFILE

#define WAV_HEADER_SIZE 44

#include <vector>
#include <cstring>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <memory>

uint32_t reverseBytes32U(uint32_t n);

#pragma pack(push, 1)
typedef struct
{
    uint32_t chunkId = reverseBytes32U(0x52494646); //RIFF
    uint32_t chunkSize;
    uint32_t format = reverseBytes32U(0x57415645); //WAVE
    uint32_t subchunk1Id = reverseBytes32U(0x666d7420); //fmt
    uint32_t subchunk1Size = (16);
    uint16_t audioFormat = (1);
    uint16_t numChannels = (1);
    uint32_t sampleRate;
    uint32_t byteRate;
    uint16_t blockAlign = (sizeof(short int));
    uint16_t bitsPerSample = (8 * (sizeof(short int)));
    uint32_t subchunk2Id = reverseBytes32U(0x64617461); //DATA
    uint32_t subchunk2Size = 0;
}   WavHeader;
#pragma pack(pop)

class WavSaver
{
public:

    WavSaver(short int* Data, uint32_t SampleNumber, uint32_t SampleRate, std::string FilePath);

    ~WavSaver() = default;

    short int* sigToSave = nullptr;
    uint32_t SampleNumber;
    uint32_t SampleRate;
    std::string SavePath;
};


#endif
