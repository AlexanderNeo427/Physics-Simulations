#define OLC_PGE_APPLICATION

#include "Application.h"

int main()
{
	Application* app = new Application();

	if (app->Construct(1250, 900, 1, 1, true))
		app->Start();

	delete app;
	app = nullptr;

	return 0;
}