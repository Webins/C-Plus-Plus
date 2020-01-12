/*
 * Account.hpp
 *
 *  Created on: 30 dic. 2019
 *      Author: webins
 */

#ifndef BASE_HPP_
#define BASE_HPP_
#include <string>
#include <iostream>
class Base{
	int integer;
public:
	//constructors
	Base();
	Base(int);
	//copy constructor
	Base(const Base &);
	//destructor
	~Base();
	//assigment
	Base &operator=(const Base &);
};



#endif /* BASE_HPP_ */
