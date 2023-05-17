#ifndef __JX_VECTOR2_H
#define __JX_VECTOR2_H

#include "JadeX/Base.h"

typedef f32 JXVector2[2];

void 	JXVector2Create		(f32 x, f32 y, JXVector2 dest);
void 	JXVector2Array		(f32* v, JXVector2 dest);
void 	JXVector2Copy		(JXVector2 v, JXVector2 dest);
void 	JXVector2Zero		(JXVector2 dest);
f32 	JXVector2Dot		(JXVector2 a, JXVector2 b);
f32		JXVector2Dot2		(JXVector2 v);
f32		JXVector2Length		(JXVector2 v);
void	JXVector2Normalize	(JXVector2 v, JXVector2 dest);
void	JXVector2Add		(JXVector2 a, JXVector2 b, JXVector2 dest);
void 	JXVector2Sub		(JXVector2 a, JXVector2 b, JXVector2 dest);
void 	JXVector2Mul		(JXVector2 a, JXVector2 b, JXVector2 dest);
void	JXVector2Scale		(JXVector2 v, f32 scalar, JXVector2 dest);
void	JXVector2Div		(JXVector2 a, JXVector2 b, JXVector2 dest);
void 	JXVector2DivS		(JXVector2 v, f32 scalar, JXVector2 dest);
void 	JXVector2Negate		(JXVector2 v, JXVector2 dest);
void	JXVector2Rotate		(JXVector2 v, float angle, JXVector2 dest);


#endif