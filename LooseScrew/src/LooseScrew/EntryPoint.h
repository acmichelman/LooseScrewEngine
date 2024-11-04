//Programs entrypoint. Basically our main function

#pragma once

#ifdef LS_PLATFORM_WINDOWS

extern LooseScrew::Application* LooseScrew::CreateApplication();

int main(int argc, char** argv) {

	
	//Our entry point into the program
	auto app = LooseScrew::CreateApplication();
	app->Run();
	delete app;
}

#endif // LS_PLATFORM_WINDOWS
