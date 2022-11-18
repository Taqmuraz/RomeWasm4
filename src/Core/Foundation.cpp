#include <chrono>
#include "Foundation.h"

float time()
{
    std::chrono::duration<float, std::ratio<1>> d = std::chrono::system_clock::now().time_since_epoch();
    return d.count();
}