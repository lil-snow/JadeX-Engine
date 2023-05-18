#include "JadeX/Math/Math.h"
#include <stdlib.h>
#include <time.h>

f32 JXMin(f32 a, f32 b)
{
	return (a < b) ? a : b;
}

f32 JXMax(f32 a, f32 b)
{
	return (a > b) ? a : b;
}

f32 JXFloor(f32 n)
{
	return ((f32)((i32) n));
}

f32 JXNormalize(f32 n, f32 min, f32 max)
{
	return (n - min) / (max - min);
}

f32 JXLerp(f32 n, f32 min, f32 max)
{
	return (max - min) * n + min;
}

f32 JXMap(f32 n, f32 srcMin, f32 srcMax, f32 dstMin, f32 dstMax)
{
	JXLerp(JXNormalize(n, srcMin, srcMax), dstMin, dstMax);
}

f32 JXClamp(f32 n, f32 min, f32 max)
{
	return JXMin(JXMax(n, min), max);
}

f32 JXRadians(f32 degrees)
{
	return degrees / 180 * JX_PI;
}

f32 JXDegrees(f32 radians)
{
	return radians * 180 / JX_PI;
}

static u32 s_Seed = 1;

void JXSeed(u32 seed)
{
	s_Seed = seed;
}

f32 JXRandom()
{
	static const u32 a = 1664525;
	static const u32 c = 1013904223;
	static const u32 m = 65537;

	s_Seed = (a * s_Seed + c) % m;
	return s_Seed / m;
}