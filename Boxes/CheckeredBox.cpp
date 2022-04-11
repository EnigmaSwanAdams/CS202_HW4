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

#include "CheckeredBox.h"

// class defintions
// defualt constructor 
CheckeredBox::CheckeredBox(): Box() {
	cout <<"called checkered box defualt \n";
};
// quick contructor
CheckeredBox::CheckeredBox(int w, int h): Box(w, h) {
	cout << "called checkered box quick cosntructor \n";
};