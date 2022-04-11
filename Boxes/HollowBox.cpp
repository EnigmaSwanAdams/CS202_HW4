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

//#include "HollowBox.h"
#include "Box.hpp"

// class defintions
// defualt constructor 
HollowBox::HollowBox(): Box() {
	//cout << "called hollowed box defualt \n";
};
// quick contructor
HollowBox::HollowBox(int w, int h): Box(w, h) {
	//cout << "called hollowed box defualt \n";
};

//printing function
void HollowBox::print(std::ostream& os) const {
	//os  << "printing Hollow box with wdith: " << this->getWidth() << " And height " << this->getHeight() << endl;

	for (int columnNum = 1; columnNum <= this->getWidth(); columnNum++) { // print first line 
		os << "x";
	}
	os << "\n";

	for (int lineNum = 2; lineNum <= this->getHeight()-1; lineNum++) { // print body 
		os << "x";
		for (int columnNum = 2; columnNum <= this->getWidth()-1; columnNum++) {
			os << " ";
		}
		os << "x\n"; 
	}

	if (this->getHeight() > 1) {
		for (int columnNum = 1; columnNum <= this->getWidth(); columnNum++) { // print last line 
			os << "x";
		}
		os << "\n";
	}
}

//type function (returns the type of box as a decriptive string)
std::string HollowBox::type() const {
	return "Hollow";
}