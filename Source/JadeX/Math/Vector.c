#include "JadeX/Math/Vector.h"

#include <math.h>

void JXVector2Create(f32 x, f32 y, JXVector2 dest)
{
	dest[0] = x;
	dest[1] = y;
}

void JXVector2Array(f32* v, JXVector2 dest)
{
	dest[0] = v[0];
	dest[1] = v[1];
}

void JXVector2Copy(JXVector2 v, JXVector2 dest)
{
	dest[0] = v[0];
	dest[1] = v[1];
}

void JXVector2Zero(JXVector2 dest)
{
	dest[0] = 0.0f;
	dest[1] = 0.0f;
}


f32 JXVector2Dot(JXVector2 a, JXVector2 b)
{
	return a[0] * b[0] + a[1] * b[1];
}

f32 JXVector2Dot2(JXVector2 v)
{
	return JXVector2Dot(v, v);
}

f32 JXVector2Length(JXVector2 v)
{
	return sqrtf(JXVector2Dot2(v));
}

void JXVector2Normalize(JXVector2 v, JXVector2 dest)
{
	f32 len = JXVector2Length(v);
	dest[0] = v[0] / len;
	dest[1] = v[1] / len;
}

void JXVector2Add(JXVector2 a, JXVector2 b, JXVector2 dest)
{
	dest[0] = a[0] + b[0];
	dest[1] = a[1] + b[1];
}

void JXVector2Sub(JXVector2 a, JXVector2 b, JXVector2 dest)
{
	dest[0] = a[0] - b[0];
	dest[1] = a[1] - b[1];
}

void JXVector2Mul(JXVector2 a, JXVector2 b, JXVector2 dest)
{
	dest[0] = a[0] * b[0];
	dest[1] = a[1] * b[1];
}

void JXVector2Scale(JXVector2 v, f32 scalar, JXVector2 dest)
{
	dest[0] = v[0] * scalar;
	dest[1] = v[1] * scalar;
}

void JXVector2Div(JXVector2 a, JXVector2 b, JXVector2 dest)
{
	dest[0] = a[0] / b[0];
	dest[1] = a[1] / b[1];
}

void JXVector2DivS(JXVector2 v, f32 scalar, JXVector2 dest)
{
	dest[0] = v[0] / scalar;
	dest[1] = v[1] / scalar;
}

void JXVector2Negate(JXVector2 v, JXVector2 dest)
{
	dest[0] = -v[0];
	dest[1] = -v[1];
}

void JXVector2Rotate(JXVector2 v, float angle, JXVector2 dest)
{
	
}