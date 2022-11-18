#include "wasm4.h"
#include <stdio.h>
#include "Math/Mat4.h"
#include "Core/Memory/Memory.h"
#include "Core/Collections/Array.h"

#define screenWidth 160
#define screenHeight 160 

StaticPointer<Array<byte, 8>> literalR = staticNew(Array<byte, 8>{
    0b01010101,
    0b01000001,
    0b01000001,
    0b01000001,
    0b00010001,
    0b00000101,
    0b00110010,
    0b10000011,
});
StaticPointer<Array<byte, 8>> literalL = staticNew(Array<byte, 8>{
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b01010101,
});
byte* frame = (byte*)0xa0;

void drawLiteral(Vec2 pos, StaticPointer<Array<byte, 8>> literal)
{
    for (uint i = 0; i < 8; i++)
    {
        int p = (int)pos.x + ((int)i + (int)pos.y) * screenWidth;
        int shift = (p & 3) << 1;
        frame[p >> 2] = (byte)(((int)(*literal)[i]) << shift);
        frame[(p >> 2) + 1] = (byte)(((int)(*literal)[i]) >> (8 - shift));
    }
}

void update () 
{
    Vec2 posR = Vec2(15, 15);
    Vec2 posL = Vec2(25, 15);
    drawLiteral(posR, literalR);
    drawLiteral(posL, literalL);
}
