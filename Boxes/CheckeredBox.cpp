/*
* Enigma Swan Adams
* CS202 Homework #4
* 4/10/2022
*
*
*
* file decription:
* CheckeredBox class function defintions
* type, constructors, destructor, and print functions
*/


#include "Box.hpp"

// class defintions
// defualt constructor 
CheckeredBox::CheckeredBox(): Box() {};

// quick contructor
CheckeredBox::CheckeredBox(int w, int h): Box(w, h) {};

// destructor 
CheckeredBox::~CheckeredBox() {};

//printing function
void CheckeredBox::print(std::ostream& os) const {
	for (int lineNum = 1; lineNum <= this->getHeight(); lineNum++) {

		if (lineNum % 2 == 1) { // if the line number is odd start with x

			for (int columnNum = 1; columnNum <= this->getWidth(); columnNum++) { // print a line
				if (columnNum % 2 == 1) { 
					os << "x";
				}
				else {
					os << " ";
				}
			}
			os << "\n"; // line ended
		}
		else { // oherwise start with a space
			for (int columnNum = 1; columnNum <= this->getWidth(); columnNum++) { // print a line
				if (columnNum % 2 == 1) {
					os << " ";
				}
				else {
					os << "x";
				}
			}
			os << "\n"; // line ended
		}
	}
}

//type function (returns the type of box as a decriptive string)
std::string CheckeredBox::type() const {
	return "Checkered";
}