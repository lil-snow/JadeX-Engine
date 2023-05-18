#ifndef __JX_VECTOR2_H
#define __JX_VECTOR2_H

#include "JadeX/Base.h"

struct __JXVector2 	{ f32 x, y; };
struct __JXVector2d { f64 x, y; };
struct __JXVector2i { i32 x, y; };
struct __JXVector2l { i64 x, y; };

struct __JXVector3 	{ f32 x, y, z; };
struct __JXVector3d { f64 x, y, z; };
struct __JXVector3i { i32 x, y, z; };
struct __JXVector3l { i64 x, y, z; };

struct __JXVector4 	{ f32 x, y, z, w; };
struct __JXVector4d { f64 x, y, z, w; };
struct __JXVector4i { i32 x, y, z, w; };
struct __JXVector4l { i64 x, y, z, w; };

typedef struct __JXVector2 	JXVector2;
typedef struct __JXVector2* JXVector2_p;

typedef struct __JXVector3 	JXVector3;
typedef struct __JXVector3* JXVector3_p;

typedef struct __JXVector4 	JXVector4;
typedef struct __JXVector4* JXVector4_p;

void 	JXVector2Create			(f32 x, f32 y, JXVector2_p dest);
void 	JXVector2Array			(f32* v, JXVector2_p dest);
void 	JXVector2Copy			(JXVector2 v, JXVector2_p dest);
void 	JXVector2Zero			(JXVector2_p dest);
f32 	JXVector2Dot			(JXVector2 a, JXVector2 b);
f32		JXVector2Length			(JXVector2 v);
void	JXVector2Normalize		(JXVector2 v, JXVector2_p dest);
void	JXVector2Add			(JXVector2 a, JXVector2 b, JXVector2_p dest);
void 	JXVector2Sub			(JXVector2 a, JXVector2 b, JXVector2_p dest);
void 	JXVector2Mul			(JXVector2 a, JXVector2 b, JXVector2_p dest);
void	JXVector2Scale			(JXVector2 v, f32 scalar, JXVector2_p dest);
void	JXVector2Div			(JXVector2 a, JXVector2 b, JXVector2_p dest);
void 	JXVector2DivS			(JXVector2 v, f32 scalar, JXVector2_p dest);
void 	JXVector2Negate			(JXVector2 v, JXVector2_p dest);

void 	JXVector3Create			(f32 x, f32 y, f32 z, JXVector3_p dest);
void 	JXVector3CreateVector2	(JXVector2 xy, f32 z, JXVector3_p dest);
void 	JXVector3Array			(f32* v, JXVector3_p dest);
void 	JXVector3Copy			(JXVector3 v, JXVector3_p dest);
void 	JXVector3Zero			(JXVector3_p dest);
f32 	JXVector3Dot			(JXVector3 a, JXVector3 b);
f32		JXVector3Length			(JXVector3 v);
void 	JXVector3Cross			(JXVector3 a, JXVector3 b, JXVector3_p dest);
void	JXVector3Normalize		(JXVector3 v, JXVector3_p dest);
void	JXVector3Add			(JXVector3 a, JXVector3 b, JXVector3_p dest);
void 	JXVector3Sub			(JXVector3 a, JXVector3 b, JXVector3_p dest);
void 	JXVector3Mul			(JXVector3 a, JXVector3 b, JXVector3_p dest);
void	JXVector3Scale			(JXVector3 v, f32 scalar, JXVector3_p dest);
void	JXVector3Div			(JXVector3 a, JXVector3 b, JXVector3_p dest);
void 	JXVector3DivS			(JXVector3 v, f32 scalar, JXVector3_p dest);
void 	JXVector3Negate			(JXVector3 v, JXVector3_p dest);

void 	JXVector4Create			(f32 x, f32 y, f32 z, f32 w, JXVector4_p dest);
void 	JXVector4CreateVector3	(JXVector3 xyz, f32 w, JXVector4_p dest);
void 	JXVector4Array			(f32* v, JXVector4_p dest);
void 	JXVector4Copy			(JXVector4 v, JXVector4_p dest);
void 	JXVector4Zero			(JXVector4_p dest);
f32 	JXVector4Dot			(JXVector4 a, JXVector4 b);
f32		JXVector4Length			(JXVector4 v);
void	JXVector4Normalize		(JXVector4 v, JXVector4_p dest);
void	JXVector4Add			(JXVector4 a, JXVector4 b, JXVector4_p dest);
void 	JXVector4Sub			(JXVector4 a, JXVector4 b, JXVector4_p dest);
void 	JXVector4Mul			(JXVector4 a, JXVector4 b, JXVector4_p dest);
void	JXVector4Scale			(JXVector4 v, f32 scalar, JXVector4_p dest);
void	JXVector4Div			(JXVector4 a, JXVector4 b, JXVector4_p dest);
void 	JXVector4DivS			(JXVector4 v, f32 scalar, JXVector4_p dest);
void 	JXVector4Negate			(JXVector4 v, JXVector4_p dest);

#endif