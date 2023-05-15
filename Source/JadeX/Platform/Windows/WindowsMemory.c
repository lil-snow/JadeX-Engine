#ifdef _WIN32

#include <Windows.h>
#include "JadeX/System/Memory.h"

void* JXMemoryAllocate(u64 size)
{
	HANDLE heap = GetProcessHeap();
	HeapAlloc(heap, HEAP_ZERO_MEMORY, size);
}

JXResult JXMemoryFree(void* pointer)
{
	HANDLE heap = GetProcessHeap();
	HeapFree(heap, 0, pointer);
}

#endif