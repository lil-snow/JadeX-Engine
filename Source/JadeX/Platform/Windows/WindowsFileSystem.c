#ifdef _WIN32


#include "JadeX/System/FileSystem.h"
#include <Windows.h>

JXFile JXFileCreate(str_c path)
{
	JXFile file;
	file.path = path;

	HANDLE handle = CreateFileA(
		path,
		GENERIC_WRITE,
		FILE_SHARE_WRITE,
		NULL,
		CREATE_ALWAYS,
		FILE_ATTRIBUTE_NORMAL,
		NULL
	);

	file.handle = handle;
}

JXFile JXFileOpen(str_c path)
{
	JXFile file;
	file.path = path;

	HANDLE handle = CreateFileA(
		path,
		(GENERIC_READ | GENERIC_WRITE),
		(FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE),
		NULL,
		OPEN_ALWAYS,
		FILE_ATTRIBUTE_NORMAL,
		NULL
	);

	file.handle = handle;

	return file;
}

str_c JXFileRead(const JXFile_p file)
{
	DWORD size = GetFileSize(file->handle, NULL);
	str buffer = malloc(size + 1);
	DWORD read;
	ReadFile(file->handle, buffer, size, &read, NULL);
	buffer[size] = '\0';
	return buffer;
}

JXResult JXFileWrite(const JXFile_p file, str_c buffer)
{
	u64 size = strlen(buffer);
	return WriteFile(file->handle, buffer, size, NULL, NULL);
}

JXResult JXFileClose(const JXFile_p file)
{
	return CloseHandle(file->handle);
}

JXResult JXFileDelete(JXFile_p file)
{
	file->handle = NULL;
	BOOL result = DeleteFileA(file->path);
	file->path = NULL;
	return result;
}

i8 JXFileIsValid(const JXFile_p file)
{
	return (file->handle != NULL && file->handle != INVALID_HANDLE_VALUE && file->path != NULL);
}

#endif