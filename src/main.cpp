#include "wasm4.h"
#include <stdio.h>

#define screenWidth 160
#define screenHeight 160 
#define byte uint8_t

const byte literal[] = {
    0b01010101,
    0b01000001,
    0b01000001,
    0b01000001,
    0b00010001,
    0b00000101,
    0b00010001,
    0b01000001,
};
byte* frame = (byte*)0xa0;

void update () 
{
    for (int i = 0; i < 8; i++) frame[15 + (i + 15) * (screenWidth >> 2)] = literal[i];
}
