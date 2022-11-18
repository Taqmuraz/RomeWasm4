#include "wasm4.h"
#include <stdio.h>
#include "Math/Mat4.h"
#include "Core/Memory/Memory.h"
#include "Core/Collections/Array.h"
#include "Core/Foundation.h"
#include "Math/Math.h"

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
        frame[p >> 2] = (byte)(((int)literal->operator[](i)) << shift);
        frame[(p >> 2) + 1] = (byte)(((int)literal->operator[](i)) >> (8 - shift));
    }
}

float counter = 0;

void update () 
{
    float s = sin(counter);
    float c = cos(counter);
    counter += 0.001f;
    Vec2 offset = Vec2(s, c) * 30.0f;
    Vec2 posR = Vec2(screenWidth >> 1, screenHeight >> 1) + offset;
    Vec2 posL = Vec2((screenWidth >> 1) + 10, screenHeight >> 1) + offset;
    drawLiteral(posR, literalR);
    drawLiteral(posL, literalL);
}
