#include <Cubix.h>
#include <stdio.h>

class SandBox : public cubix::Application
{
public:
	SandBox()
	{
		printf("Created Sandbox\n");
	}
};

cubix::Application* cubix::CreateApplication()
{
	return new SandBox();
}