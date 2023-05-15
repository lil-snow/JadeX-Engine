#ifndef __JX_FILESYSTEM_H
#define __JX_FILESYSTEM_H

#include "JadeX/Base.h"

struct __JXFile
{
	str_c path;
	void* handle;
};

typedef struct __JXFile 	JXFile;
typedef struct __JXFile* 	JXFile_p;

JXFile 		JXFileCreate			(str_c path);
JXFile 		JXFileOpen				(str_c path);
str_c 		JXFileRead				(const JXFile_p file);
JXResult	JXFileWrite				(const JXFile_p file, str_c buffer);
JXResult	JXFileClose				(const JXFile_p file);
JXResult	JXFileDelete			(JXFile_p file);
i8			JXFileIsValid			(const JXFile_p file);

#endif