#include <JadeX.h>

int main(char** argc, int argv)
{
	JXWindowInit();

	JXWindow_p window = JXWindowAllocPointer();
	JX_ASSERT(JXWindowInitPointer(window, 1920 / 2, 1080 / 2, "JadeX Window"));
	JX_ASSERT(JXWindowCreate(window));
	JX_ASSERT(JXWindowShow(window));

	while (JX_TRUE)	
	{
		JX_ASSERT(JXWindowUpdate(window));
	}

	JX_ASSERT(JXWindowDestroyPointer(window));
}