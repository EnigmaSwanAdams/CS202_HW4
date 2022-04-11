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

#ifndef CHECKEREDBOX_H_
#define CHECKEREDBOX_H_


// class declaration
class CheckeredBox : public Box {

public:
	// defualt constructor 
	CheckeredBox();
	// quick contructor
	CheckeredBox(int w, int h);

	//printing function
	void print(std::ostream& os = cout) const;

	//type function (returns the type of box as a decriptive string)
	std::string type() const;

private:

};




#endif /* CHECKEREDBOX_H */