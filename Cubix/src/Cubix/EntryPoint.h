#pragma once

#ifdef CX_PLATFORM_WINDOWS

/*
* Our entry point is defined in our Engine that will handle our client creation
* we call CreateApplication that returns a pointer to our Client and then we call Run
* with an infinite loop. When wwe exit we delete the pointer and exit from the stack
*/

extern cubix::Application* cubix::CreateApplication();

int main(int argc, char** argv)
{
	cubix::Log::Init();
	CX_CORE_INFO("Engine Started!");

	cubix::Application* app = cubix::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif