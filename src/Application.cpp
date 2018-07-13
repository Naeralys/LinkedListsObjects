#include "Application.hpp"

/* CONSTRUCTOR */
Application::Application() {
	nextPtr = ( struct Node* ) malloc( sizeof( struct Node ));
	nextPtr->next = NULL;
}

/* PRIVATE METHODS */

void Application::AddNode( int objectType ) {
	struct Node *newPtr = ( struct Node* ) malloc( sizeof( struct Node ));
	// Create a rectangle node
	if( objectType == 1 ) {
		Rectangle *newObject = new Rectangle();
		newPtr->value = newObject;
		std::cout << "\nRectangle created and added to the list!" << std::endl;
	} 
	// Create a triangle node
	else if( objectType == 2 ) {
		Triangle *newObject = new Triangle();
		newPtr->value = newObject;
		std::cout << "\nTriangle created and added to the list!" << std::endl;
	}
	// Connect nodes
	newPtr->next = nextPtr;
	nextPtr = newPtr;
}
void Application::AddNodeChoice() {
	int choice = 3;
	// Print menu
	std::cout << "Which kind of object?" << std::endl;
	std::cout << "1. Rectangle" << std::endl;
	std::cout << "2. Triangle" << std::endl;
	std::cout << "3. Exit" << std::endl;
	std::cin >> choice;
	switch( choice ) {
	// Rectangle
	case 1: AddNode( 1 ); 
		break;
	// Triangle
	case 2: AddNode( 2 );
		break;
	// Exit submenu method
	default: break;
	}
	std::cout << std::endl;
}
void Application::PrintList() {
	// New pointer to iterate with
	struct Node *nextListPtr;
	nextListPtr = nextPtr;
	std::cout << "Printing List..." << std::endl;
	// Iteration loop
	while( nextListPtr->next != NULL ) {
		nextListPtr->value->Update();
		nextListPtr = nextListPtr->next;
	}
	std::cout << std::endl;
}
int Application::Menu() {
	int input;
	// Print menu
	std::cout << "--- Menu ---" << std::endl;
	std::cout << "1. Add Node" << std::endl;
	std::cout << "2. Print List" << std::endl;
	std::cout << "3. Exit" << std::endl;
	std::cout << "Input: ";
	// Get user input
	std::cin >> input;
	std::cout << std::endl;
	return input;
}

/* PUBLIC METHODS */

void Application::Init() {
	_isRunning = true;
}

void Application::Update() {
	int choice;
	choice = Menu();
	// Evaluate user input
	switch(choice) {
	case 1: AddNodeChoice();
		break;
	case 2: PrintList();
		break;
	default: _isRunning = false;
		break;
	}
}

