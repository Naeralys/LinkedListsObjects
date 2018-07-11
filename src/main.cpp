#include "Application.hpp"

int main() {
	Application app;
	
	if( app.Init() )
		std::cout << "Application initiated" << std::endl;

	while( app.IsRunning() ) {
		app.Update();
	}

	std::cout << "Terminating program..." << std::endl;

	return 0;
}
