#ifndef __JX_WINDOW_H
#define __JX_WINDOW_H

#include "JadeX/Base.h"

struct __JXWindowData
{
	u32 Width, Height;
	str Title;
};

typedef struct __JXWindowData JXWindowData;
typedef struct __JXWindowData* JXWindowData_p;

struct __JXWindow
{
	JXHandle handle;
	JXWindowData data;
};

typedef struct __JXWindow  JXWindow;
typedef struct __JXWindow* JXWindow_p;

JXResult	JXWindowInit			();
JXWindow_p 	JXWindowAllocPointer	();
JXResult	JXWindowInitPointer		(JXWindow_p window, u32 width, u32 height, str title);
JXResult	JXWindowCreate			(JXWindow_p window);
JXResult	JXWindowShow			(JXWindow_p window);
JXResult	JXWindowUpdate			(JXWindow_p window);
JXResult	JXWindowDestroyPointer	(JXWindow_p window);

#endif