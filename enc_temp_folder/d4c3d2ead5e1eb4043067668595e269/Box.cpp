/*
* Enigma Swan Adams
* CS202 Homework #4
* 4/10/2022
*
*
*
* file decription:
* file containing Box base class constructors, 
* get and set functions for member vairables
* global operator<< overload function, and
* global boxFactory function
*/


#include "Box.hpp"
using std::unique_ptr;

// class defintions

// defualt constructor
Box::Box() : _w(1), _h(1) {}

// quick constructor
Box::Box(int w, int h) : _w(w), _h(h) {}

// destructor 
Box::~Box(){}
	
// get functions
int Box::getWidth() const { return _w; }

int Box::getHeight() const{ return _h; }

// set functions
void Box::setWidth(int w) { _w = w; }
void Box::setHeight(int h) { _h = h; }


// global function << operator overload 
// doesn't need to be a friend since we have get and set functions
std::ostream& operator<<(std::ostream& os, const Box &b) {
	b.print(os);
	return os;
}

//boxfactory function creates boxes of specified types 
// returns a null pointer if an incorrect box type character specfier is passed
unique_ptr<Box> boxFactory(char c, int w , int h ) {
	if (c == 'c') {
		return std::make_unique<CheckeredBox>(w,h);
	}

	else if (c == 'f') {
		return std::make_unique<FilledBox>(w, h);
	}

	else if (c == 'h') {
		return std::make_unique<HollowBox>(w, h);
	}

	// if invalid character passed give back null
	else {
		return NULL;
	}
	
}
