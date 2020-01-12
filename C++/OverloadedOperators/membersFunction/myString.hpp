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

//Methods
	size_t getLenght(void) const;
	void display(void) const;
	const char * getString(void) const;

//Operator overloading
	myString &operator=(const myString &);
	myString &operator=(myString &&);

	myString &operator+(const myString &);
	myString &operator+(myString &&);

	myString&operator+(void);
	myString&operator-(void);

	bool operator==(const myString &) const;
};



#endif /* PLAYER_HPP_ */
