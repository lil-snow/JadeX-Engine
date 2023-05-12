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

struct __JXLoggerData
{
	str name;
	JXLogSeverity severity;
};

typedef struct __JXLoggerData 	JXLoggerData;
typedef struct __JXLoggerData* 	JXLoggerData_p;

struct __JXConsoleLogger
{
	JXLoggerData data;
};

typedef struct __JXConsoleLogger 	JXConsoleLogger;
typedef struct __JXConsoleLogger* 	JXConsoleLogger_p;

struct __JXFileLogger
{
	JXLoggerData data;
	str file;
};

typedef struct __JXFileLogger 	JXFileLogger;
typedef struct __JXFileLogger* 	JXFileLogger_p;

JXConsoleLogger_p 	JXConsoleLoggerAllocPointer			();
JXResult 			JXConsoleLoggerInitPointer			(JXConsoleLogger_p logger, str name);
JXLogSeverity 		JXConsoleLoggerGetSeverity			(const JXConsoleLogger_p logger);
JXResult			JXConsoleLoggerSetSeverity			(JXConsoleLogger_p logger, JXLogSeverity severity);
JXResult 			JXConsoleLoggerTrace				(const JXConsoleLogger_p logger, str_c message, ...);
JXResult 			JXConsoleLoggerInfo					(const JXConsoleLogger_p logger, str_c message, ...);
JXResult 			JXConsoleLoggerDebug				(const JXConsoleLogger_p logger, str_c message, ...);
JXResult 			JXConsoleLoggerWarn					(const JXConsoleLogger_p logger, str_c message, ...);
JXResult 			JXConsoleLoggerError				(const JXConsoleLogger_p logger, str_c message, ...);
JXResult 			JXConsoleLoggerFatal				(const JXConsoleLogger_p logger, str_c message, ...);
JXResult			JXConsoleLoggerDestroyPointer		(const JXConsoleLogger_p logger);

JXFileLogger_p		JXFileLoggerAllocPointer			();
JXResult			JXFileLoggerInitPointer				(JXFileLogger_p logger, str name);
JXLogSeverity		JXFileLoggerGetSeverity				(const JXFileLogger_p logger);
JXResult			JXFileLoggerSetSeverity				(const JXFileLogger_p logger, JXLogSeverity severity);
JXResult			JXFileLoggerTrace					(const JXFileLogger_p logger, str_c message, ...);
JXResult			JXFileLoggerInfo					(const JXFileLogger_p logger, str_c message, ...);
JXResult			JXFileLoggerDebug					(const JXFileLogger_p logger, str_c message, ...);
JXResult			JXFileLoggerWarn					(const JXFileLogger_p logger, str_c message, ...);
JXResult			JXFileLoggerError					(const JXFileLogger_p logger, str_c message, ...);
JXResult			JXFileLoggerFatal					(const JXFileLogger_p logger, str_c message, ...);
JXResult			JXFileLoggerDestroyPointer			(const JXFileLogger_p logger);

#endif