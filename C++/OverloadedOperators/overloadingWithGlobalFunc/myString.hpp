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
	//compare
	friend bool operator==(const myString &, const myString&);



	//concat
	friend myString operator+(const myString &, const myString&);
	friend myString operator+(const myString& ,myString &&);

	//lower and uppercase
	friend myString operator+(myString&);
	friend myString operator-(myString&);
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

	myString &operator=(const myString &);
	myString &operator=(myString &&);

//Methods
	size_t getLenght(void) const;
	void display(void) const;
	const char * getString(void) const;
};



#endif /* PLAYER_HPP_ */

