#pragma once

#include "core.h"

namespace Drakosha {
	
	class DRAKOSHA_API Application
	{
	public:
		Application();

		virtual ~Application();

		void run();
	};

	Application* createApplication();
}
