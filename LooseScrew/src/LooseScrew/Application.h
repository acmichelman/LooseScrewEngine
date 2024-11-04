#pragma once

#include "Core.h"

namespace LooseScrew {

	class LOOSESCREW_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		
	};

	//To Be defined in CLIENT
	Application* CreateApplication();
}


