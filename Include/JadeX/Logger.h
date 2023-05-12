#ifndef __JX_LOGGER_H
#define __JX_LOGGER_H

#include "Base.h"

#define JX_SEVERITY_ALL 	((u8) 0x0000)
#define JX_SEVERITY_TRACE 	((u8) 0x0001)
#define JX_SEVERITY_INFO 	((u8) 0x0002)
#define JX_SEVERITY_DEBUG 	((u8) 0x0003)
#define JX_SEVERITY_WARNING	((u8) 0x0004)
#define JX_SEVERITY_ERROR 	((u8) 0x0005)
#define JX_SEVERITY_FATAL 	((u8) 0x0006)
#define JX_SEVERITY_NONE	((u8) 0xFFFF)

typedef u8 JXLogSeverity;

struct __JXLogger
{
	str name;
	JXLogSeverity severity;
};

typedef struct __JXLogger JXLogger;
typedef struct __JXLogger* JXLogger_p;

JXLogger_p 		JXLoggerAllocPointer 				();
JXResult 		JXLoggerInitConsoleLoggerPointer	(JXLogger_p logger, str name);
JXResult 		JXLoggerInitFileLoggerPointer		(JXLogger_p logger, str name);
JXLogSeverity 	JXLoggerGetSeverity					(const JXLogger_p logger);
JXResult		JXLoggerSetSeverity					(JXLogger_p logger, JXLogSeverity severity);
JXResult 		JXLoggerTrace						(const JXLogger_p logger, str_c message, ...);
JXResult 		JXLoggerInfo						(const JXLogger_p logger, str_c message, ...);
JXResult 		JXLoggerDebug						(const JXLogger_p logger, str_c message, ...);
JXResult 		JXLoggerWarn						(const JXLogger_p logger, str_c message, ...);
JXResult 		JXLoggerError						(const JXLogger_p logger, str_c message, ...);
JXResult 		JXLoggerFatal						(const JXLogger_p logger, str_c message, ...);
JXResult		JXLoggerDestroy						(const JXLogger_p logger);

#endif