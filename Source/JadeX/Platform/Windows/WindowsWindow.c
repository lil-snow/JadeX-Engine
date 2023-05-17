#ifdef _WIN32
#include "JadeX/Window.h"

#include <Windows.h>

#include "JadeX/System/Memory.h"

#define JX_WINDOW_CLASS_NAME "JadeX Window Class"

LRESULT CALLBACK JXWindowProc(HWND window, UINT message, WPARAM wp, LPARAM lp)
{
	return DefWindowProcA(window, message, wp, lp);
}

JXResult JXWindowInit()
{
	WNDCLASSA wc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hbrBackground = 0;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hInstance = NULL;
	wc.lpfnWndProc = JXWindowProc;
	wc.lpszClassName = JX_WINDOW_CLASS_NAME;
	wc.lpszMenuName = NULL;
	wc.style = 0;

	RegisterClassA(&wc);

	return JX_TRUE;
}

JXWindow_p JXWindowAllocPointer()
{
	return JXMemoryAllocate(sizeof(JXWindow));
}

JXResult JXWindowInitPointer(JXWindow_p window, u32 width, u32 height, str title)
{
	window->data.Width = width;
	window->data.Height = height;
	window->data.Title = title;
	window->handle = INVALID_HANDLE_VALUE;

	return JX_TRUE;
}

JXResult JXWindowCreate(JXWindow_p window)
{
<<<<<<< HEAD
	HWND handle = CreateWindowA(
=======
	HWND handle = CreateWindowExA(
		0L,
>>>>>>> 348f621e7b62412015203dcf7a1fb64b06250f66
		JX_WINDOW_CLASS_NAME,
		window->data.Title,
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT,
		window->data.Width, window->data.Height,
		NULL,
		NULL,
		NULL,
		NULL
	);

	window->handle = handle;

	return (window->handle != INVALID_HANDLE_VALUE);
}

JXResult JXWindowShow(JXWindow_p window)
{
	i8 res = ShowWindow(window->handle, SW_SHOW);

	int err = GetLastError();
	if (err != NO_ERROR)
		printf("Win32 Error: %i", err);

	return res;
}

JXResult JXWindowMaximize(JXWindow_p window)
{
	return ShowWindow(window->handle, SW_MAXIMIZE);
}

JXResult JXWindowUpdate(JXWindow_p window)
{
	MSG msg;
	while (PeekMessageA(&msg, window->handle, 0, 0, PM_REMOVE))
	{
		TranslateMessage(&msg);
		DispatchMessageA(&msg);
	}

	return JX_TRUE;
}

JXResult JXWindowDestroyPointer(JXWindow_p window)
{
	if (!DestroyWindow(window->handle))
		return JX_FALSE;

	if (!JXMemoryFree(window))
		return JX_FALSE;

	return JX_TRUE;
}

#endif