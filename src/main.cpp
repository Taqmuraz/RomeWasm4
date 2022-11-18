#include "wasm4.h"
#include <stdio.h>
#include "Math/Mat4.h"
#include "Core/Memory/Memory.h"
#include "Core/Collections/Array.h"

#define screenWidth 160
#define screenHeight 160 

StaticPointer<Array<byte, 8>> literal = staticNew(Array<byte, 8>{
    0b01010101,
    0b01000001,
    0b01000001,
    0b01000001,
    0b00010001,
    0b00000101,
    0b00110010,
    0b10000011,
});
byte* frame = (byte*)0xa0;

void update () 
{
    Vec2 pos = Vec2(15, 15);
    for (uint i = 0; i < 8; i++) frame[(int)pos.x + ((int)i + (int)pos.y) * (screenWidth >> 2)] = (*literal)[i];
}
