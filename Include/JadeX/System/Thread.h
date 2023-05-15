#ifndef __JX_THREAD_H
#define __JX_THREAD_H

#include "JadeX/Base.h"

typedef u32 JXThreadID;

typedef void*(*JXThreadFunc)(void* data);

struct __JXThread
{
	void* handle;
	JXThreadID id;
};

typedef struct __JXThread 	JXThread;
typedef struct __JXThread* 	JXThread_p;

JXThread_p 	JXThreadAllocPointer		();
JXResult	JXThreadInitPointer			(JXThread_p thread);
JXResult 	JXThreadCreate				(JXThread_p thread, JXThreadFunc func, void* data);
JXResult	JXThreadStart				(JXThread_p thread);
JXResult	JXThreadSleep				(u32 timeMilliseconds);
JXResult 	JXThreadJoin				(JXThread_p thread);
JXResult	JXThreadDestroy				(JXThread_p thread);
JXThreadID	JXThreadGetThreadID			(JXThread_p thread);
JXThreadID	JXThreadGetCurrentThreadID	();
i8			JXThreadIsValid				(JXThread_p thread);

#endif