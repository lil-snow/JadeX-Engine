#ifndef __JX_MATH_H
#define __JX_MATH_H

#include "JadeX/Base.h"

#define JX_PI 	3.14159265359f

f32 	JXMin			(f32 a, f32 b);
f32 	JXMax			(f32 a, f32 b);
f32 	JXFloor			(f32 n);
f32 	JXNormalize		(f32 n, f32 min, f32 max);
f32 	JXLerp			(f32 n, f32 min, f32 max);
f32 	JXMap			(f32 n, f32 srcMin, f32 srcMax, f32 dstMin, f32 dstMax);
f32 	JXClamp			(f32 n, f32 min, f32 max);
f32 	JXRadians		(f32 degrees);
f32 	JXDegrees		(f32 radians);
void 	JXSeed			(u32 seed);
f32 	JXRandom		();

#endif