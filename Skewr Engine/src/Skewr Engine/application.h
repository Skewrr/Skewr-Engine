#pragma once
#include "core.h"

namespace se {

	class SE_API Application {
	public:
		Application();
		~Application();

		void run();
	};

	Application* createApplication();

}