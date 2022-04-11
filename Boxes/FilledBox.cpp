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

#include "FilledBox.h"

// class defintions 
// defualt constructor 
FilledBox::FilledBox(): Box() {
	cout << "called filled box defualt \n";
};
// quick contructor
FilledBox::FilledBox(int w, int h): Box(w, h) {
	cout << "called filled box defualt \n";
};

//printing function
void FilledBox::print(std::ostream& os) const { // only set defualt as cout in the function declaration not in definition
	os << "printing filled box with wdith: " << this->getWidth() << " And height " << this->getHeight() << endl;
}

//type function (returns the type of box as a decriptive string)
std::string FilledBox::type() const {
	return "Filled";
}