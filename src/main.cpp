#include "Application.hpp"

int main() {
	Application app;
	
	// Initialize App
	app.Init();
	std::cout << "Application initiated" << std::endl;

	// App loop
	while( app.IsRunning() ) {
		app.Update();
	}

	std::cout << "Terminating program..." << std::endl;

	return 0;
}
