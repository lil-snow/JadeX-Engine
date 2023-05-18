#include <JadeX.h>

int main(char** argc, int argv)
{
	JXConsoleLogger_p logger = JXConsoleLoggerAllocPointer();
	JXConsoleLoggerInitPointer(logger, "CORE");

	JXVector3 a;
	JXVector3Create(0.1f, 2.0f, 3.5f, &a);
	JXConsoleLoggerInfo(logger, "A: %f, %f, %f", a.x, a.y, a.z);

	JXVector3 b = { 4.5f, 5.2f, 6.0f };
	JXConsoleLoggerInfo(logger, "B: %f, %f, %f", b.x, a.y, a.z);

	JXVector3 v = { 0.0f, 0.0f, 0.0f };
	JXVector3Cross(a, b, &v);
	JXConsoleLoggerInfo(logger, "Vector3: %f, %f, %f", v.x, v.y, v.z);
	
	JXWindowInit();

	JXWindow_p window = JXWindowAllocPointer();
	JXWindowInitPointer(window, 1920 / 2, 1080 / 2, "JadeX Window");
	JXWindowCreate(window);
	JXWindowShow(window);
	JXWindowMaximize(window);

	JXVector4 v4 = JXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);


	while (JX_TRUE)	
	{
		JXWindowUpdate(window);
	}

	JXWindowDestroyPointer(window);
	JXConsoleLoggerDestroyPointer(logger);
}