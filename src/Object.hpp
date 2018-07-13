#ifndef Object_hpp
#define Object_hpp

#include <iostream>

/* Abstract Class for the object types
 * Virtual Update method */

class Object {
public:
	virtual void Update() = 0;
};

#endif
