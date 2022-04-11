/*
* Enigma Swan Adams 
* CS202 Homework #4
* 4/10/2022
* 
* 
* 
* file decription:
* file containing main, for temporary 
* to be replaced wtih testing file
*/

#include "Box.h"
#include "FilledBox.h"
#include "CheckeredBox.h"
#include "HollowBox.h"

int main() {
	Box b;
	CheckeredBox cb;
	HollowBox hb;
	FilledBox fb;

	Box qb = Box(1,2);
	CheckeredBox qcb = CheckeredBox(3,4);
	HollowBox qhb = HollowBox(5,6);
	FilledBox qfb = FilledBox(7,8);

	cout << "first boxes height: " << b.getHeight() << endl;
	cout << "4th boxes width: " << qb.getHeight() << endl;
	return 0;
}