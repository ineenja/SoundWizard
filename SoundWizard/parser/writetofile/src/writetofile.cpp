#include "writetofile.h"

uint32_t reverseBytes32U(uint32_t n)
{
    uint32_t temp1 = n >> 24;
    uint32_t temp2 = ((n << 8) >> 24) << 8;
    uint32_t temp3 = ((n << 16) >> 24) << 16;
    uint32_t temp4 = n << 24;
    return (temp4 | temp3 | temp2 | temp1);
}

WavSaver::WavSaver(short int* Data, uint32_t SampleNumber, uint32_t SampleRate, std::string FilePath)
{
    sigToSave = new short[SampleNumber * sizeof(short int)];
    memcpy(sigToSave, Data, SampleNumber * sizeof(short int));
    this->SampleNumber = SampleNumber;
    this->SampleRate = SampleRate;
    SavePath = FilePath;

    WavHeader MyWavHeader;
    MyWavHeader.sampleRate = SampleRate;
    MyWavHeader.byteRate = SampleRate * (sizeof(short int));
    MyWavHeader.chunkSize = (sizeof(short int) * (uint32_t)(SampleNumber) + WAV_HEADER_SIZE - sizeof(MyWavHeader.chunkId) - sizeof(MyWavHeader.chunkSize));
    MyWavHeader.subchunk2Size = (sizeof(short int) * (uint32_t)SampleNumber);

    std::ofstream fs;
    fs.open(FilePath, std::ios::binary);

    fs.write((char*)(&MyWavHeader), sizeof(WavHeader));
    fs.write((char*)(sigToSave), sizeof(short int)*SampleNumber);

    fs.close();

    delete [] sigToSave;
}
