#ifndef __JX_OPENGL_H
#define __JX_OPENGL_H

#define APIENTRYP APIENTRY *
#define APIENTRY 

#include "JadeX/Base.h"

void JXOpenGLInit();

typedef void(APIENTRYP PFNGLGENVERTEXARRAYS) (u32 size, u32* arrays);
PFNGLGENVERTEXARRAYS JXGLGenVertexArrays;
#define glGenVertexArrays JXGLGenVertexArrays

#endif