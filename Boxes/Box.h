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
#include <ostream>
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

	// set functions
	void setWidth(int w);
	void setHeight(int h);

	//printing virtual function
	virtual void print(std::ostream& os = cout) const =0;
	

private:
	int _w; // width
	int _h; // height
};





#endif /* BOX_H */