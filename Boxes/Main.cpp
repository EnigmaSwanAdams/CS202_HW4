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
	cout << "second boxes height: " << cb.getHeight() << endl;
	cout << "5th boxes width: " << qb.getWidth() << endl;
	cout << "6th boxes width: " << qcb.getWidth() << endl;

	cout << "setting first box width to 6 and height to 8" << endl;
	b.setHeight(8);
	b.setWidth(6);
	cout << "first boxes new height: " << b.getHeight() << endl;
	cout << "First boxes new width: " << b.getWidth() << endl;


	cout << "setting 2nd box width to 6 and height to 8" << endl;
	cb.setHeight(8);
	cb.setWidth(6);
	cout << "2nd boxes new height: " << cb.getHeight() << endl;
	cout << "2nd boxes new width: " << cb.getWidth() << endl;

	return 0;
}