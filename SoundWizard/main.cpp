#include "sound/sound.h"

int main()
{
    Sound MySound = Sound("information.txt"); // создаем объект класса sound который считает информацию из файла, достанет интересующие нас параметры и создаст генераторы

    MySound.GenerateSoundFile(); // на основе полученных параметров сгенерируем звуковой файл формата .wav
}
