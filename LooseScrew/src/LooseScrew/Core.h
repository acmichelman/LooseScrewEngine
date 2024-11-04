#pragma once

#ifdef  LS_PLATFORM_WINDOWS
	#ifdef LS_BUILD_DLL
		#define LOOSESCREW_API __declspec(dllexport)
	#else
		#define LOOSESCREW_API __declspec(dllimport)
	#endif

#else
	#error Only supports Windows right now!

#endif //  LS_PLATFORM_WINDOWS
