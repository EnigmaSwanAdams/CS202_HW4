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

#include "Box.hpp"


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
	
	//type function (returns the type of box as a decriptive string)
	std::string type() const;

private:
	
};





#endif /* FILLEDBOX_H */