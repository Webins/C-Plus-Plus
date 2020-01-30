/*
 * IllegalBalanceException.hpp
 *
 *  Created on: 13 ene. 2020
 *      Author: webins
 */

#ifndef ILLEGALBALANCEEXCEPTION_HPP_
#define ILLEGALBALANCEEXCEPTION_HPP_

#include <iostream>
class IllegalBalanceException : public std::exception{
public:
	virtual const char * what() const noexcept {
		return "Illegal Balance Exception";
	}
	virtual ~IllegalBalanceException()= default;
};


#endif /* ILLEGALBALANCEEXCEPTION_HPP_ */
