#include "Application.hpp"

/* CONSTRUCTOR */
Application::Application() {
	nextPtr = ( struct Node* ) malloc( sizeof( struct Node ));
	nextPtr->next = NULL;
}

/* PRIVATE METHODS */
void Application::AddNode( int objectType ) {
	struct Node *newPtr = ( struct Node* ) malloc( sizeof( struct Node ));
	if( objectType == 1 ) {
		Rectangle *newObject = new Rectangle();
		newPtr->value = newObject;
		std::cout << "\nRectangle created and added to the list!" << std::endl;
	} else if( objectType == 2 ) {
		Triangle *newObject = new Triangle();
		newPtr->value = newObject;
		std::cout << "\nTriangle created and added to the list!" << std::endl;
	}
	newPtr->next = nextPtr;
	nextPtr = newPtr;
}
void Application::AddNodeChoice() {
	int choice = 3;
	std::cout << "Which kind of object?" << std::endl;
	std::cout << "1. Rectangle" << std::endl;
	std::cout << "2. Triangle" << std::endl;
	std::cout << "3. Exit" << std::endl;
	std::cin >> choice;
	switch( choice ) {
	case 1: AddNode( 1 );
		break;
	case 2: AddNode( 2 );
		break;
	default: break;
	}
	std::cout << std::endl;
}
void Application::PrintList() {
	struct Node *nextListPtr;
	nextListPtr = nextPtr;
	std::cout << "Printing List..." << std::endl;
	while( nextListPtr->next != NULL ) {
		nextListPtr->value->Update();
		nextListPtr = nextListPtr->next;
	}
	std::cout << std::endl;
}
int Application::Menu() {
	int input;
	std::cout << "--- Menu ---" << std::endl;
	std::cout << "1. Add Node" << std::endl;
	std::cout << "2. Print List" << std::endl;
	std::cout << "3. Exit" << std::endl;
	std::cout << "Input: ";
	std::cin >> input;
	std::cout << std::endl;
	return input;
}

/* PUBLIC METHODS */

bool Application::Init() {
	_isRunning = true;
	return 1;
}

void Application::Update() {
	int choice;
	choice = Menu();
	switch(choice) {
	case 1: AddNodeChoice();
		break;
	case 2: PrintList();
		break;
	default: _isRunning = false;
		break;
	}
}

