/*
 * SavingAccount.hpp
 *
 *  Created on: 30 dic. 2019
 *      Author: webins
 */

#ifndef DERIVED_HPP_
#define DERIVED_HPP_
#include "Derived.hpp"
#include "Base.hpp"

class Derived :public Base{
	int integerTwo;
public:
	//constructor
	Derived();
	Derived(int);
//	Derived::Derived(int,int);
	//destructor
	~Derived();
	//copy constructor
	Derived(const Derived&);
	//assigment
	Derived&operator=(const Derived &);
};




#endif /*DERIVED_HPP_ */
