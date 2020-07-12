#pragma once

#ifdef PLATFORM_WINDOWS

extern Drakosha::Application* Drakosha::createApplication();

int main(int argc, char** argv)
{
	auto app = Drakosha::createApplication();
	app->run();
	delete app;
}

#endif //  PLATFORM_WINDOWS
