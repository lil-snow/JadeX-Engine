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

str JXGetSeverityAsString(JXLogSeverity severity)
{
	switch (severity)
	{
		case JX_SEVERITY_TRACE: return "TRACE";
		case JX_SEVERITY_INFO: return "INFO";
		case JX_SEVERITY_DEBUG: return "DEBUG";
		case JX_SEVERITY_WARNING: return "WARNING";
		case JX_SEVERITY_ERROR: return "ERROR";
		case JX_SEVERITY_FATAL: return "FATAL";
		default: return "";
	}
}

str JXGetTimeAsString()
{
	time_t now = time(NULL);
	char* timestamp = malloc(11);
	strftime(timestamp, 11, "%H:%M:%S", localtime(&now));
	return timestamp;
}

str JXGetLogMessage(JXLoggerData_p data, JXLogSeverity severity, str_c outputColor, str_c message, va_list args)
{
	if (message == NULL)
		return NULL;

	if (data->name == NULL)
		return NULL;

	if (data->severity > severity)
		return NULL;

	char* severityStr 	= JXGetSeverityAsString	(severity);
	char* timeStr 		= JXGetTimeAsString		();
	char* msg			= JXFormatMessageArgs(message, args);	

	return JXFormatMessage("%s[%s] [%s] %s >> %s\033[0m", outputColor, timeStr, data->name, severityStr, msg);
}

JXConsoleLogger_p JXConsoleLoggerAllocPointer()
{
	return (JXConsoleLogger_p) malloc(sizeof(JXConsoleLogger));
}

JXResult JXConsoleLoggerInitPointer(JXConsoleLogger_p logger, str name)
{
	logger->data.name = name;
	logger->data.severity = JX_SEVERITY_ALL;

	return JX_TRUE;
}

JXLogSeverity JXConsoleLoggerGetSeverity(const JXConsoleLogger_p logger)
{
	return logger->data.severity;
}

JXResult JXConsoleLoggerSetSeverity(JXConsoleLogger_p logger, JXLogSeverity severity)
{
	logger->data.severity = severity;
}

JXResult JXConsoleLoggerTrace(JXConsoleLogger_p logger, str_c message, ...)
{
	if (logger == NULL || message == NULL)
		return JX_FALSE;

	va_list list;
	va_start(list, message);
	char* msg = JXGetLogMessage(&(logger->data), JX_SEVERITY_TRACE, JX_OUTPUT_COLOR_PURPLE, message, list);
	va_end(list);

	if (msg == NULL)
		return JX_FALSE;

	printf("%s\n", msg);

	return JX_TRUE;
}

JXResult JXConsoleLoggerInfo(JXConsoleLogger_p logger, str_c message, ...)
{
	if (logger == NULL || message == NULL)
		return JX_FALSE;

	va_list list;
	va_start(list, message);
	char* msg = JXGetLogMessage(&(logger->data), JX_SEVERITY_INFO, JX_OUTPUT_COLOR_BLUE, message, list);
	va_end(list);

	if (msg == NULL)
		return JX_FALSE;

	printf("%s\n", msg);

	return JX_TRUE;
}

JXResult JXConsoleLoggerDebug(JXConsoleLogger_p logger, str_c message, ...)
{
	if (logger == NULL || message == NULL)
		return JX_FALSE;

	va_list list;
	va_start(list, message);
	char* msg = JXGetLogMessage(&(logger->data), JX_SEVERITY_DEBUG, JX_OUTPUT_COLOR_GREEN, message, list);
	va_end(list);

	if (msg == NULL)
		return JX_FALSE;

	printf("%s\n", msg);

	return JX_TRUE;
}

JXResult JXConsoleLoggerWarn(JXConsoleLogger_p logger, str_c message, ...)
{
	if (logger == NULL || message == NULL)
		return JX_FALSE;

	va_list list;
	va_start(list, message);
	char* msg = JXGetLogMessage(&(logger->data), JX_SEVERITY_WARNING, JX_OUTPUT_COLOR_YELLOW, message, list);
	va_end(list);

	if (msg == NULL)
		return JX_FALSE;

	printf("%s\n", msg);

	return JX_TRUE;
}

JXResult JXConsoleLoggerError(JXConsoleLogger_p logger, str_c message, ...)
{
	if (logger == NULL || message == NULL)
		return JX_FALSE;

	va_list list;
	va_start(list, message);
	char* msg = JXGetLogMessage(&(logger->data), JX_SEVERITY_ERROR, JX_OUTPUT_COLOR_RED, message, list);
	va_end(list);

	if (msg == NULL)
		return JX_FALSE;

	printf("%s\n", msg);

	return JX_TRUE;
}

JXResult JXConsoleLoggerFatal(JXConsoleLogger_p logger, str_c message, ...)
{
	if (logger == NULL || message == NULL)
		return JX_FALSE;

	va_list list;
	va_start(list, message);
	char* msg = JXGetLogMessage(&(logger->data), JX_SEVERITY_FATAL, JX_OUTPUT_COLOR_RED, message, list);
	va_end(list);

	if (msg == NULL)
		return JX_FALSE;

	printf("%s\n", msg);

	return JX_TRUE;
}

JXResult JXConsoleLoggerDestroyPointer(const JXConsoleLogger_p logger)
{
	free(logger);
}