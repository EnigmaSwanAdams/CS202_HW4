/*
* Enigma Swan Adams
* CS202 Homework #4
* 4/10/2022
*
*
*
* file decription:
*
*/


#include "Box.h"
// class defintions

// defualt constructor
Box::Box() : _w(1), _h(1) {
	cout << "box defualt constructor \n";
}

// quick constructor
Box::Box(int w, int h) : _w(w), _h(h) {
	cout << "box defualt constructor with width:" << _w << " height: " << _h << endl;;
}
	
// get functions
int Box::getWidth() const {
	cout << "box getw \n";
	return _w;
}

int Box::getHeight() const{
	cout << "box geth \n";
	return _h;
}

// set functions
void Box::setWidth(int w) {
	cout << "set w \n";
	_w = w;
}
void Box::setHeight(int h) {
	cout << "set h \n";
	_h = h;
}


// global function << operator overload 
// doesn't need to eb friend since we have get and set functions
std::ostream& operator<<(std::ostream& os, const Box &b) {
	os << "calling operator<< overload for boxes... \n";
	b.print(os);
	return os;
}
