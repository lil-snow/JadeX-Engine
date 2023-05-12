#include "JadeX/Logger.h"

#include <stdarg.h>

str P_JXFormatMessage(str_c message, va_list list)
{

}

JXLogger_p JXLoggerAllocPointer()
{
	return (JXLogger_p) malloc(sizeof(JXLogger));
}

JXResult JXLoggerInit(JXLogger_p logger, str name)
{
	
	logger->name = name;
	logger->severity = JX_SEVERITY_ALL;

	return JX_TRUE;
}

JXLogSeverity JXLoggerGetSeverity(const JXLogger_p logger)
{
	return logger->severity;
}

JXResult JXLoggerSetSeverity

JXResult JXLoggerTrace(JXLogger_p logger, str_c message, ...)
{
	if (logger == NULL || message == NULL)
		return JX_FALSE;
}