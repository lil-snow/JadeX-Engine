#include <JadeX.h>
#include "JadeX/Math/Math.h"

int main(char** argc, int argv)
{
	JXWindowInit();

	JXConsoleLogger_p logger = JXConsoleLoggerAllocPointer();
	JXConsoleLoggerInitPointer(logger, "CORE");
	JXConsoleLoggerInfo(logger, "Hello World!");

	f32 n = JXRandomRange(0, 100);
	JXConsoleLoggerInfo(logger, "Random Number: %f", n);

	JXConsoleLoggerDestroyPointer(logger);
}