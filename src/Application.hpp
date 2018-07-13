#ifndef Application_hpp
#define Application_hpp

#include <iostream>
#include "Object.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"

struct Node {
	Object *value;
	struct Node *next;
};

class Application {
private:
	bool _isRunning;
	int _nodeValue;
	struct Node *startPtr;
	struct Node *nextPtr;
	
	void AddNode( int objectType );
	void AddNodeChoice();
	void PrintList();
	int Menu();
public:
	Application();
	bool IsRunning() { return _isRunning;};
	bool Init();
	void Update();
};

#endif
