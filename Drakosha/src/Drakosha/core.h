#pragma once

#ifdef PLATFORM_WINDOWS
	#ifdef BUILD_DLL
		#define DRAKOSHA_API __declspec(dllexport)
	#else
		#define DRAKOSHA_API __declspec(dllimport)
	#endif // BUILD_DLL
#else
	#error Drakosha only on windows!
#endif //  PLATFORM_WINDOWS
