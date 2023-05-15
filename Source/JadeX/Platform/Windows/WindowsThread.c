#ifdef _WIN32
#include "JadeX/System/Thread.h"
#include "JadeX/System/Memory.h"

#include <Windows.h>

JXThread_p JXThreadAllocPointer()
{
	return JXMemoryAllocate(sizeof(JXThread));
}

JXResult JXThreadInitPointer(JXThread_p thread)
{
	thread->handle = NULL;
	thread->id = 0;
}

JXResult JXThreadCreate(JXThread_p thread, JXThreadFunc func, void* data)
{
	thread->handle = CreateThread(
		NULL,
		0,
		(LPTHREAD_START_ROUTINE) func,
		data,
		CREATE_SUSPENDED,
		(LPDWORD) &thread->id
	);

	return JXThreadIsValid(thread);
}

JXResult JXThreadStart(JXThread_p thread)
{
	if (!JXThreadIsValid(thread))
		return JX_FALSE;
	DWORD count = ResumeThread(thread->handle);

	return JX_TRUE;
}

JXResult JXThreadSleep(u32 timeMilliseconds)
{
	Sleep(timeMilliseconds);
}

JXResult JXThreadJoin(JXThread_p thread)
{
	if (!JXThreadIsValid(thread))
		return JX_FALSE;
	WaitForSingleObject(thread->handle, INFINITE);

	return JX_TRUE;
}

JXResult JXThreadDestroy(JXThread_p thread)
{
	BOOL result = CloseHandle(thread->handle);
	JXMemoryFree(thread);
}

JXThreadID JXThreadGetThreadID(JXThread_p thread)
{
	return thread->id;
}

JXThreadID JXThreadGetCurrentThreadID()
{
	return GetCurrentThreadId();
}

i8 JXThreadIsValid(JXThread_p thread)
{
	return (thread != NULL && thread->handle != INVALID_HANDLE_VALUE && thread->id != 0);
}

#endif