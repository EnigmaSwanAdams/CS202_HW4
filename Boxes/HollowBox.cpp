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

#include "HollowBox.h"

// class defintions
// defualt constructor 
HollowBox::HollowBox(): Box() {
	cout << "called hollowed box defualt \n";
};
// quick contructor
HollowBox::HollowBox(int w, int h): Box(w, h) {
	cout << "called hollowed box defualt \n";
};

//printing function
void HollowBox::print(std::ostream& os) const {
	os  << "printing Hollow box with wdith: " << this->getWidth() << " And height " << this->getHeight() << endl;
}

//type function (returns the type of box as a decriptive string)
std::string HollowBox::type() const {
	return "Hollow";
}