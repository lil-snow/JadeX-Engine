#include <stdio.h>
#include <JadeX.h>

void* threadFunc(void* arg) {
	str_c message = (str_c) arg;
	JXThreadSleep(2000);
	printf("Done on side thread\n");
	return NULL;
}

int main(char** argc, int argv)
{
	JXThread_p thread = JXThreadAllocPointer();
	str_c message = "Hello from Thread!";
	JXThreadCreate(thread, threadFunc, (void*)message);
	JXThreadStart(thread);

	JXThreadSleep(1000);
	printf("Done on main thread\n");

	JXThreadJoin(thread);
	JXThreadDestroy(thread);
}