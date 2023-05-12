#include <stdio.h>
#include <JadeX.h>

int main(char** argc, int argv)
{
	JXLogger_p logger = malloc(sizeof(JXLogger));
	JXLoggerInit(logger, "CoreLogger");
	printf("Hello World %s\n", logger->name);
}