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


#ifndef FILLEDBOX_H_
#define FILLEDBOX_H_

//class declaration 
class FilledBox : public Box {

public:
	// defualt constructor 
	FilledBox();
	// quick contructor
	FilledBox(int w, int h);
	
	//printing function
	void print(std::ostream& os = cout) const;
	

private:
	
};





#endif /* FILLEDBOX_H */