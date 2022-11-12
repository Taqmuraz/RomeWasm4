#pragma once
#define safeDiv(a, b) (b == 0 ? 0 : (a / b))
#define safeDivExplicit(b, default, result) (b == 0 ? default : result)