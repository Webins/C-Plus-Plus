/*
 * Player.hpp
 *
 *  Created on: 19 dic. 2019
 *      Author: webins
 */
#include <string>
#include <iostream>
#include <cstring>
#ifndef PLAYER_HPP_
#define PLAYER_HPP_

class myString{
//streams extraction and insertion
	friend std::ostream &operator<<(std::ostream &, const myString&);
	friend std::istream &operator>>(std::istream &, myString&);
private:
	char * str;
public:
//Constructors
	myString();
	myString(const char *);

//Destructor
	~myString();

//Copy constructor
	myString(const myString &);

//Move constructor
	myString(myString &&);
//default operator overloading
	myString &operator=(const myString &);
	myString &operator=(myString &&);

//Methods
	size_t getLenght(void) const;
	void display(void) const;
	const char * getString(void) const;

//Operator overloading
//compare
	bool operator==(const myString&) const;
	bool operator!=(const myString&) const;
	bool operator> (const myString&) const;
	bool operator< (const myString&) const;
//concat
	myString operator+(const myString&) const;
	myString operator+(myString &&) const;
	myString& operator+=(const myString&);
	myString& operator+=(myString&&);
//lower and uppercase
	myString operator+(void);
	myString operator-(void);
//Repeat
	myString operator*(size_t);
	myString& operator*=(size_t);
//Duplicate
	myString &operator++(void); //pre increment
	myString operator++(int); //post increment
};



#endif /* PLAYER_HPP_ */

