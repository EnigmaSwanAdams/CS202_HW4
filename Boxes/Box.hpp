/*
* Enigma Swan Adams
* CS202 Homework #4
* 4/10/2022
*
*
*
* file decription:
* header containing all class
* declarations
* and associated global functions
* for all Base classes and its 
* derived classes
*/



#include <iostream> 
#include <ostream>
using std::cout;


#ifndef BOX_H_
#define BOX_H_

//class declaration for virtual base class Box
class Box
{
public:
	// defualt contstructor
	Box();
	
	//quick constructor 
	Box(int w, int h);

	//virtual desctructor
	virtual ~Box();

	// get functions
	int getWidth() const;
	int getHeight() const;

	// set functions
	void setWidth(int w);
	void setHeight(int h);

	//printing virtual function
	virtual void print(std::ostream& os = cout) const =0;

	//type virtual function (returns the type of box as a decriptive string)
	virtual std::string type() const = 0;
	

private:
	int _w; // width
	int _h; // height
};


//class declaration for concrete class FilledBox
class FilledBox : public Box {

public:
	// defualt constructor 
	FilledBox();

	// quick contructor
	FilledBox(int w, int h);

	//destructor 
	~FilledBox();

	//printing function
	void print(std::ostream& os = cout) const;

	//type function (returns the type of box as a decriptive string)
	std::string type() const;

private:

};

// class declaration for contrete class CheckeredBox
class CheckeredBox : public Box {

public:
	// defualt constructor 
	CheckeredBox();

	// quick contructor
	CheckeredBox(int w, int h);

	// desctructor
	~CheckeredBox();

	//printing function
	void print(std::ostream& os = cout) const;

	//type function (returns the type of box as a decriptive string)
	std::string type() const;

private:

};


// class declaration for contrete class HollowBox
class HollowBox : public Box {

public:
	// defualt constructor 
	HollowBox();

	// quick contructor
	HollowBox(int w, int h);

	// destrctor
	~HollowBox();

	//printing function
	void print(std::ostream& os = cout) const;

	//type function (returns the type of box as a decriptive string)
	std::string type() const;

private:

};

// global function << operator overload 
// doesn't need to be friend since we have get and set functions
std::ostream& operator<<(std::ostream& os, const Box &b);

//boxfactory function creates boxes of specified types 
// returns a null pointer if an incorrect box type character specfier is passed
std::unique_ptr<Box> boxFactory(char c, int w = 1, int h = 1);

#endif /* BOX_H */