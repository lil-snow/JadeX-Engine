#include "JadeX/Math/Vector.h"

#include <math.h>

void JXVector2Create(f32 x, f32 y, JXVector2_p dest)
{
	dest->x = x;
	dest->y = y;
}

void JXVector2Array(f32* v, JXVector2_p dest)
{
	dest->x = v[0];
	dest->y = v[1];
}

void JXVector2Copy(JXVector2 v, JXVector2_p dest)
{
	dest->x = v.x;
	dest->y = v.y;
}

void JXVector2Zero(JXVector2_p dest)
{
	dest->x = 0.0f;
	dest->y = 0.0f;
}

f32 JXVector2Dot(JXVector2 a, JXVector2 b)
{
	return a.x * b.x + a.y * b.y;
}

f32 JXVector2Length(JXVector2 v)
{
	return sqrtf(JXVector2Dot(v, v));
}

void JXVector2Normalize(JXVector2 v, JXVector2_p dest)
{
	f32 len = JXVector2Length(v);
	dest->x = v.x / len;
	dest->y = v.y / len;
}

void JXVector2Add(JXVector2 a, JXVector2 b, JXVector2_p dest)
{
	dest->x = a.x + b.x;
	dest->y = a.y + b.y;
}

void JXVector2Sub(JXVector2 a, JXVector2 b, JXVector2_p dest)
{
	dest->x = a.x - b.x;
	dest->y = a.y - b.y;
}

void JXVector2Mul(JXVector2 a, JXVector2 b, JXVector2_p dest)
{
	dest->x = a.x * b.x;
	dest->y = a.y * b.y;
}

void JXVector2Scale(JXVector2 v, f32 scalar, JXVector2_p dest)
{
	dest->x = v.x * scalar;
	dest->y = v.y * scalar;
}

void JXVector2Div(JXVector2 a, JXVector2 b, JXVector2_p dest)
{
	dest->x = a.x / b.x;
	dest->y = a.y / b.y;
}

void JXVector2DivS(JXVector2 v, f32 scalar, JXVector2_p dest)
{
	dest->x = v.x / scalar;
	dest->y = v.y / scalar;
}

void JXVector2Negate(JXVector2 v, JXVector2_p dest)
{
	dest->x = -v.x;
	dest->y = -v.y;
}

void JXVector3Create(f32 x, f32 y, f32 z, JXVector3_p dest)
{
	dest->x = x;
	dest->y = y;
	dest->z = z;
}

void JXVector3Create2(JXVector2 xy, JXVector3_p dest)
{
	dest->x = xy.x;
	dest->y = xy.y;
	dest->z = 0.0f;
}

void JXVector3Create2Z(JXVector2 xy, f32 z, JXVector3_p dest)
{
	dest->x = xy.x;
	dest->y = xy.y;
	dest->z = z;	
}

void JXVector3Copy(JXVector3 v, JXVector3_p dest)
{
	dest->x = v.x;
	dest->y = v.y;
	dest->z = v.z;
}

void JXVector3Array(f32* v, JXVector3_p dest)
{
	dest->x = v[0];
	dest->y = v[1];
	dest->z = v[2];
}

void JXVector3Zero(JXVector3_p dest)
{
	dest->x = 0.0f;
	dest->y = 0.0f;
	dest->z = 0.0f;
}

f32 JXVector3Dot(JXVector3 a, JXVector3 b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z;
}

f32 JXVector3Length(JXVector3 v)
{
	return sqrtf(JXVector3Dot(v, v));
}

void JXVector3Cross(JXVector3 a, JXVector3 b, JXVector3_p dest)
{
	dest->x = a.y * b.z - a.z * b.y;
	dest->y = a.z * b.x - a.x * b.z;
	dest->z = a.x * b.y - a.y * b.x;
}

void JXVector3Normalize(JXVector3 v, JXVector3_p dest)
{
	f32 length = JXVector3Length(v);
	dest->x = v.x / length;
	dest->y = v.y / length;
	dest->z = v.z / length;
}

void JXVector3Add(JXVector3 a, JXVector3 b, JXVector3_p dest)
{
	dest->x = a.x + b.x;
	dest->y = a.y + b.y;
	dest->z = a.z + b.z;
}

void JXVector3Sub(JXVector3 a, JXVector3 b, JXVector3_p dest)
{
	dest->x = a.x - b.x;
	dest->y = a.y - b.y;
	dest->z = a.z - b.z;
}

void JXVector3Mul(JXVector3 a, JXVector3 b, JXVector3_p dest)
{
	dest->x = a.x * b.x;
	dest->y = a.y * b.y;
	dest->z = a.z * b.z;
}

void JXVector3Scale(JXVector3 v, f32 scalar, JXVector3_p dest)
{
	dest->x = v.x * scalar;
	dest->y = v.y * scalar;
	dest->z = v.z * scalar;
}

void JXVector3Div(JXVector3 a, JXVector3 b, JXVector3_p dest)
{
	dest->x = a.x / b.x;
	dest->y = a.y / b.y;
	dest->z = a.z / b.z;
}

void JXVector3DivS(JXVector3 v, f32 scalar, JXVector3_p dest)
{
	dest->x = v.x / scalar;
	dest->y = v.y / scalar;
	dest->z = v.z / scalar;
}

void JXVector3Negate(JXVector3 v, JXVector3_p dest)
{
	dest->x = -v.x;
	dest->y = -v.y;
	dest->z = -v.z;
}

void JXVector3XX(JXVector3 v, JXVector2 dest)
{
	dest.x = v.x;
	dest.y = v.x;
}

void JXVector3XY(JXVector3 v, JXVector2 dest)
{
	dest.x = v.x;
	dest.y = v.y;
}

void JXVector3XZ(JXVector3 v, JXVector2 dest)
{
	dest.x = v.x;
	dest.y = v.z;
}

void JXVector3YX(JXVector3 v, JXVector2 dest)
{
	dest.x = v.y;
	dest.y = v.x;
}

void JXVector3YY(JXVector3 v, JXVector2 dest)
{
	dest.x = v.y;
	dest.y = v.y;
}

void JXVector3YZ(JXVector3 v, JXVector2 dest)
{
	dest.x = v.y;
	dest.y = v.z;
}

void JXVector3ZX(JXVector3 v, JXVector2 dest)
{
	dest.x = v.z;
	dest.y = v.x;
}

void JXVector3ZY(JXVector3 v, JXVector2 dest)
{
	dest.x = v.z;
	dest.y = v.y;
}
void JXVector3ZZ(JXVector3 v, JXVector2 dest)
{
	dest.x = v.z;
	dest.y = v.z;
}

void JXVector4Create(f32 x, f32 y, f32 z, f32 w, JXVector4_p dest)
{
	dest->x = x;
	dest->y = y;
	dest->z = z;
	dest->w = w;
}

void JXVector4CreateVector3(JXVector3 xyz, f32 w, JXVector4_p dest)
{
	dest->x = xyz.x;
	dest->y = xyz.y;
	dest->z = xyz.z;
	dest->w = w;
}

void JXVector4Array(f32* v, JXVector4_p dest)
{
	dest->x = v[0];
	dest->y = v[1];
	dest->z = v[2];
	dest->w = v[3];
}

void JXVector4Copy(JXVector4 v, JXVector4_p dest)
{
	dest->x = v.x;
	dest->y = v.y;
	dest->z = v.z;
	dest->w = v.w;
}

void JXVector4Zero(JXVector4_p dest)
{
	dest->x = 0.0f;
	dest->y = 0.0f;
	dest->z = 0.0f;
	dest->w = 0.0f;
}

f32 JXVector4Dot(JXVector4 a, JXVector4 b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

f32 JXVector4Length(JXVector4 v)
{
	return sqrtf(JXvector4Dot(v, v));
}

void JXVector4Normalize(JXVector4 v, JXVector4_p dest)
{
	f32 length = JXVector4Length(v);	
	dest->x = v.x / length;
	dest->y = v.y / length;
	dest->z = v.z / length;
	dest->w = v.w / length;
}

void JXVector4Add(JXVector4 a, JXVector4 b, JXVector4_p dest)
{
	dest->x = a.x + b.x;
	dest->y = a.y + b.y;
	dest->z = a.z + b.z;
	dest->w = a.w + b.w;
}

void JXVector4Sub(JXVector4 a, JXVector4 b, JXVector4_p dest)
{
	dest->x = a.x - b.x;
	dest->y = a.y - b.y;
	dest->z = a.z - b.z;
	dest->w = a.w - b.w;
}

void JXVector4Mul(JXVector4 a, JXVector4 b, JXVector4_p dest)
{
	dest->x = a.x * b.x;
	dest->y = a.y * b.y;
	dest->z = a.z * b.z;
	dest->w = a.w * b.w;
}

void JXVector4Scale(JXVector4 v, f32 scalar, JXVector4_p dest)
{
	dest->x = v.x * scalar;
	dest->y = v.y * scalar;
	dest->z = v.z * scalar;
	dest->w = v.w * scalar;
}

void JXVector4Div(JXVector4 a, JXVector4 b, JXVector4_p dest)
{
	dest->x = a.x / b.x;
	dest->y = a.y / b.y;
	dest->z = a.z / b.z;
	dest->w = a.w / b.w;
}

void JXVector4DivS(JXVector4 v, f32 scalar, JXVector4_p dest)
{
	dest->x = v.x / scalar;
	dest->y = v.y / scalar;
	dest->z = v.z / scalar;
	dest->w = v.w / scalar;
}

void JXVector4Negate(JXVector4 v, JXVector4_p dest)
{
	dest->x = -v.x;
	dest->y = -v.y;
	dest->z = -v.z;
	dest->w = -v.w;
}