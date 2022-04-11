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


#include <iostream> 
using std::cout;
using std::endl;

#ifndef BOX_H_
#define BOX_H_

//class declaration 
class Box
{
public:
	// defualt contstructor
	Box();
	
	//quick constructor 
	Box(int w, int h);

	// get functions
	int getWidth() const;
	int getHeight() const;

private:
	int _w; // width
	int _h; // height
};





#endif /* BOX_H */