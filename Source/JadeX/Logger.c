#include "JadeX/Logger.h"

#include <stdarg.h>
#include <stdio.h>
#include <time.h>

#define JX_OUTPUT_COLOR_RESET		"\033[0m"
#define JX_OUTPUT_COLOR_BLACK 	"\033[0;30m"
#define JX_OUTPUT_COLOR_RED			"\033[0;31m"
#define JX_OUTPUT_COLOR_GREEN 	"\033[0;32m"
#define JX_OUTPUT_COLOR_YELLOW 	"\033[0;33m"
#define JX_OUTPUT_COLOR_BLUE	 	"\033[0;34m"
#define JX_OUTPUT_COLOR_PURPLE 	"\033[0;35m"
#define JX_OUTPUT_COLOR_WHITE		"\033[0;37m"

str JXFormatMessageArgs(str_c message, va_list args)
{
	if (message == NULL)
		return NULL;

	u64 size = vsnprintf(NULL, 0, message, args) + 1;
	char* buffer = malloc(size);

	if (buffer == NULL)
	{
		return NULL;
	}

	vsprintf(buffer, message, args);

	return buffer;
}

str JXFormatMessage(str_c message, ...)
{
	va_list list;
	va_start(list, message);
	str msg = JXFormatMessageArgs(message, list);
	va_end(list);

	return msg;
}

str JXGetTimeAsString()
{
	time_t now = time(NULL);
	char* timestamp = malloc(11);
	strftime(timestamp, 11, "%H:%M:%S", localtime(&now));
	return timestamp;
}

JXLogger_p JXLoggerAllocPointer()
{
	return (JXLogger_p) malloc(sizeof(JXLogger));
}

JXResult JXLoggerInitPointer(JXLogger_p logger, str name)
{
	
	logger->name = name;
	logger->severity = JX_SEVERITY_ALL;
	logger->writer = &s_DefaultOutputStream;

	return JX_TRUE;
}

JXLogSeverity JXLoggerGetSeverity(const JXLogger_p logger)
{
	return logger->severity;
}

JXResult JXLoggerSetSeverity(JXLogger_p logger, JXLogSeverity severity)
{
	logger->severity = severity;
}

JXResult JXLoggerTrace(JXLogger_p logger, str_c message, ...)
{
	if (logger == NULL || message == NULL)
		return JX_FALSE;

	va_list list;
	va_start(list, message);
	char* msg = JXFormatMessage("%s[%s] TRACE >> %s%s", JX_OUTPUT_COLOR_PURPLE, logger->name, JXFormatMessageArgs(message, list), JX_OUTPUT_COLOR_RESET);
	va_end(list);

	logger->writer->write(msg);

	return JX_TRUE;
}

JXResult JXLoggerInfo(JXLogger_p logger, str_c message, ...)
{
	if (logger == NULL || message == NULL)
		return JX_FALSE;

	va_list list;
	va_start(list, message);
	char* msg = JXFormatMessage(message, list);
	va_end(list);

	printf("%s[%s] INFO >> %s%s\n", JX_OUTPUT_COLOR_BLUE, logger->name, msg, JX_OUTPUT_COLOR_RESET);

	return JX_TRUE;
}

JXResult JXLoggerDebug(JXLogger_p logger, str_c message, ...)
{
	if (logger == NULL || message == NULL)
		return JX_FALSE;

	va_list list;
	va_start(list, message);
	char* msg = JXFormatMessage(message, list);
	va_end(list);

	printf("%s[%s] DEBUG >> %s%s\n", JX_OUTPUT_COLOR_GREEN, logger->name, msg, JX_OUTPUT_COLOR_RESET);

	return JX_TRUE;
}

JXResult JXLoggerWarn(JXLogger_p logger, str_c message, ...)
{
	if (logger == NULL || message == NULL)
		return JX_FALSE;

	va_list list;
	va_start(list, message);
	char* msg = JXFormatMessage(message, list);
	va_end(list);

	char* time = JXGetTimeAsString();

	printf("%s[%s] [WARNING] %s >> %s%s\n", JX_OUTPUT_COLOR_YELLOW, time, logger->name, msg, JX_OUTPUT_COLOR_RESET);

	return JX_TRUE;
}

JXResult JXLoggerError(JXLogger_p logger, str_c message, ...)
{
	if (logger == NULL || message == NULL)
		return JX_FALSE;

	va_list list;
	va_start(list, message);
	char* msg = JXFormatMessage(message, list);
	va_end(list);

	char* time = JXGetTimeAsString();

	printf("%s[%s] [ERROR] %s >> %s%s\n", JX_OUTPUT_COLOR_RED, time, logger->name, msg, JX_OUTPUT_COLOR_RESET);

	return JX_TRUE;
}

JXResult JXLoggerFatal(JXLogger_p logger, str_c message, ...)
{
	if (logger == NULL || message == NULL)
		return JX_FALSE;

	va_list list;
	va_start(list, message);
	char* msg = JXFormatMessage(message, list);
	va_end(list);

	char* time = JXGetTimeAsString();

	printf("%s\033[41m[%s] [FATAL] %s >> %s%s\n", JX_OUTPUT_COLOR_WHITE, time, logger->name, msg, JX_OUTPUT_COLOR_RESET);

	return JX_TRUE;
}

JXResult JXLoggerDestroy(const JXLogger_p logger)
{
	free(logger);
}