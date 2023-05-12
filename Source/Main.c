#include <stdio.h>
#include <JadeX.h>

int main(char** argc, int argv)
{
	JXConsoleLogger_p logger = JXConsoleLoggerAllocPointer();
	JXConsoleLoggerInitPointer(logger, "CoreLogger");
	
	u32 i = 32;
	JXConsoleLoggerTrace(logger, "This is a trace message Value = %i", i);

	JXConsoleLoggerDestroyPointer(logger);
}