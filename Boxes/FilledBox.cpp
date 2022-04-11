/*
* Enigma Swan Adams
* CS202 Homework #4
* 4/10/2022
*
*
*
* file decription:
* Chceckeredbox derives class definitions for
* constructors, destructor, type, 
* and print functions 
*/

//#include "FilledBox.h"
#include "Box.hpp"

// class defintions 
// defualt constructor 
FilledBox::FilledBox(): Box() {};

// quick contructor
FilledBox::FilledBox(int w, int h): Box(w, h) {};

// destructor 
FilledBox::~FilledBox() {};

//printing function
void FilledBox::print(std::ostream& os) const { // only set defualt as cout in the function declaration not in definition
	
	for (int lineNum = 1; lineNum <= this->getHeight(); lineNum++) {
		for (int columnNum = 1; columnNum <= this->getWidth(); columnNum++) {
			os << "x";
		}
		os << "\n"; 
	}
}

//type function (returns the type of box as a decriptive string)
std::string FilledBox::type() const {
	return "Filled";
}