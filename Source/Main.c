#include <JadeX.h>
#include "JadeX/Math/Math.h"
#include <time.h>

int main(char** argc, int argv)
{
	JXWindowInit();
	JXSeed(time(NULL));

	JXConsoleLogger_p logger = JXConsoleLoggerAllocPointer();
	JXConsoleLoggerInitPointer(logger, "CORE");
	JXConsoleLoggerInfo(logger, "Hello World!");

	f32 n = JXRandom();
	JXConsoleLoggerInfo(logger, "First Random Number: %f", n);

	n = JXRandom();
	JXConsoleLoggerInfo(logger, "Second Random Number: %f", n);

	JXConsoleLoggerDestroyPointer(logger);
}