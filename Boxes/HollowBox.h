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

#ifndef HOLLOWBOX_H_
#define HOLLOWBOX_H_


// class declaration
class HollowBox : public Box {

public:
	// defualt constructor 
	HollowBox();
	// quick contructor
	HollowBox(int w, int h);

	//printing function
	void print(std::ostream& os = cout) const;

private:

};




#endif /* HOLLOWBOX_H */