#include <stdio.h>
#include <JadeX.h>

int main(char** argc, int argv)
{
	JXLoggerInit();
	JXLogger_p logger = JXLoggerAllocPointer();
	JXLoggerInitPointer(logger, "CoreLogger");
	
	u32 i = 0;
	JXLoggerTrace(logger, "This is a trace message");

	JXLoggerDestroy(logger);
}