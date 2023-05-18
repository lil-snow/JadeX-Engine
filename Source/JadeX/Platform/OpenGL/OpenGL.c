#include "JadeX/Platform/OpenGL/OpenGL.h"

#pragma lib(comment, "opengl32.lib")
#include "gl/GL.h"
#include <Windows.h>

void JXOpenGLInit()
{
	JXGLGenVertexArrays = (PFNGLGENVERTEXARRAYS) wglGetProcAddress("glGenVertexArrays");
	printf("Initializing OpenGL! glGenVertexArrays: %li\n", JXGLGenVertexArrays);
}