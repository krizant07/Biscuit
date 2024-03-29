#pragma once

#ifdef BC_PLATFORM_WINDOWS

extern Biscuit::Application* Biscuit::CreateApplication();

int main(int argc, char** argv)
{
	printf("Biscuit Entry Point\n");
	auto app = Biscuit::CreateApplication();
	app->Run();
	delete app;
}

#endif
