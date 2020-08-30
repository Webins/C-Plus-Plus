/*
 * IllegalAmountException.hpp
 *
 *  Created on: 13 ene. 2020
 *      Author: webins
 */

#ifndef ILLEGALAMOUNTEXCEPTION_HPP_
#define ILLEGALAMOUNTEXCEPTION_HPP_


#include <iostream>
class IllegalAmountException : public std::exception{
public:
	virtual const char * what() const noexcept{
		return "Illegal Amount Exception";
	}
	virtual ~IllegalAmountException()= default;
};






#endif /* ILLEGALAMOUNTEXCEPTION_HPP_ */
