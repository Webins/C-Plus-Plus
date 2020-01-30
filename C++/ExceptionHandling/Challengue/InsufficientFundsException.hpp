/*
 * InsufficientFundsException.hpp
 *
 *  Created on: 13 ene. 2020
 *      Author: webins
 */

#ifndef INSUFFICIENTFUNDSEXCEPTION_HPP_
#define INSUFFICIENTFUNDSEXCEPTION_HPP_

#include <iostream>
class InsufficientFundsException : public std::exception{
public:
	virtual const char * what() const noexcept{
		return "Insufficient Funds Exception";
	};
	virtual ~InsufficientFundsException() = default;
};








#endif /* INSUFFICIENTFUNDSEXCEPTION_HPP_ */
