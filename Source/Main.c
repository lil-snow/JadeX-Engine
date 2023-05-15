#include <JadeX.h>

int main(char** argc, int argv)
{
	JXWindowInit();

	JXWindow_p window = JXWindowAllocPointer();
	JXWindowInitPointer(window, 1920 / 2, 1080 / 2, "JadeX Window");
	JXWindowCreate(window);
	JXWindowShow(window);
	JXWindowMaximize(window);

	while (JX_TRUE)	
	{
		JXWindowUpdate(window);
	}

	JXWindowDestroyPointer(window);
}