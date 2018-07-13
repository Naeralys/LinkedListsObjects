#ifndef Application_hpp
#define Application_hpp

#include <iostream>
#include "Object.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"

/* Node for the linked list */
struct Node {
	Object *value;
	struct Node *next;
};

/* Main Application Class 
 * Contains the methods and functionality for the linked list */

class Application {
private:
	bool _isRunning;
	int _nodeValue;
	struct Node *startPtr;
	struct Node *nextPtr;
	
	/* Adds a node to the list
	 * Input will determine which type gets created */
	void AddNode( int objectType );

	/* Submenu to choose type of object to create */
	void AddNodeChoice();

	/* Iterates through the linked list with objects
	 * Calls the Update method from the abstract object class*/
	void PrintList();

	/* Prints out the main menu
	 * Returns user input value */
	int Menu();
public:
	/* Constructor initializes the first node, values are null */
	Application();

	/* IsRunning property */
	bool IsRunning() { return _isRunning; };

	/* No real value other than initializing isRunning to true */
	void Init();

	/* Update method for the main application loop
	 * Prints main menu, gets user input for choices
	 * Calls methods based on user input */
	void Update();
};

#endif
