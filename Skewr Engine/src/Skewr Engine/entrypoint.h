#pragma once
#include "application.h"

extern se::Application* se::createApplication();

int main(int argc, char** argv) {
	se::Application* app = se::createApplication();
	app->run();
	delete app;
	
	return 0;
}