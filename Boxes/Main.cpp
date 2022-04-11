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

using std::unique_ptr;

int main() {
	
	auto box1 = boxFactory('c',6,6);
	cout << *box1;

	return 0;
}