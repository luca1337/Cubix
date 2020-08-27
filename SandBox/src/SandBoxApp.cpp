#include <Cubix.h>
#include <stdio.h>

/*
* Our Sanxbox is actually our "Client" that makes use of our "Engine"
* iniheriting from Application we give the ownership to our Engine for handling our client.
*/

class SandBox : public cubix::Application
{
public:
	SandBox()
	{
		CX_INFO("Sandbox Created!");
	}

	~SandBox()
	{

	}
};

// Here we define the method createapplication implementation
// so that if we call it we will return a pointer to our sandbox class.

cubix::Application* cubix::CreateApplication()
{
	return new SandBox();
}