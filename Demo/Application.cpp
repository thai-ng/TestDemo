#include "Window.hpp"

int CALLBACK WinMain(HINSTANCE Instance, 
					 HINSTANCE /*prevInstance*/, 
					 LPSTR /*cmd*/, 
					 int /*showCode*/) {
	GE::Window window(Instance);
	[[maybe_unused]]auto handle = window.Handle();

	while (true) {
		[[maybe_unused]]int volatile i = 0;
	}
	return 0;
}