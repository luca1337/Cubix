#pragma once

#ifdef CX_PLATFORM_WINDOWS
	#ifdef CX_BUILD_DLL
		#define CUBIX_API __declspec(dllexport)
	#else
		#define CUBIX_API __declspec(dllimport)
	#endif
#else
#error Cubix only supports Windows!
#endif