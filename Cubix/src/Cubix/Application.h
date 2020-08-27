#pragma once

#include "Core.h"

namespace cubix
{
	class CUBIX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	
	// To be defined in client
	Application* CreateApplication();
}

