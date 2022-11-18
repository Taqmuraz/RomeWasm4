#include <cmath>
#pragma once
#define safeDiv(a, b) (b == 0 ? 0 : (a / b))
#define safeDivExplicit(b, default, result) (b == 0 ? default : result)

#define PI 3.141592f

#define sqrt(x) (std::sqrt(x))
#define deg2rad (180.0f / PI)
#define sin(x) std::sin(x * deg2rad)
#define cos(x) std::cos(x * deg2rad)
#define tan(x) std::tan(x * deg2rad)
#define min(a, b) (a < b ? a : b)
#define max(a, b) (a > b ? a : b)
#define clamp(v, minv, maxv) (v > maxv ? maxv : (v < minv ? minv : v))