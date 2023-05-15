#ifndef __JX_MEMORY_H
#define __JX_MEMORY_H

#include "JadeX/Base.h"

void* JXMemoryAllocate(u64 size);
JXResult JXMemoryFree(void* pointer);

#endif