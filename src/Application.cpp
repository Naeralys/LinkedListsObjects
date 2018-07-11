#include "Application.hpp"

/* CONSTRUCTOR */
Application::Application() {
	nextPtr = ( struct Node* ) malloc( sizeof( struct Node ));
	nextPtr->next = NULL;
}

/* PRIVATE METHODS */
void Application::AddNode( struct Node *node ) {
	struct Node *newPtr = ( struct Node* ) malloc( sizeof( struct Node ));
	Rectangle *newObject = new Rectangle();
	newPtr->value = newObject;
	newPtr->next = node;
	nextPtr = newPtr;
	_nodeValue++;
}
void Application::PrintList() {
	struct Node *nextListPtr;
	nextListPtr = nextPtr;
	std::cout << "Printing List..." << std::endl;
	while( nextListPtr->next != NULL ) {
		nextListPtr->value->Update();
		nextListPtr = nextListPtr->next;
	}
}
int Application::Menu() {
	int input;
	std::cout << "--- Menu ---" << std::endl;
	std::cout << "1. Add Node" << std::endl;
	std::cout << "2. Print List" << std::endl;
	std::cout << "3. Exit" << std::endl;
	std::cout << "Input: ";
	std::cin >> input;
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
	case 1: AddNode( nextPtr );
		break;
	case 2: PrintList();
		break;
	case 3: _isRunning = false;
		break;
	}
}

