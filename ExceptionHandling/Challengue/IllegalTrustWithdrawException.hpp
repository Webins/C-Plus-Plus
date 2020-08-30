/*
 * IllegalTrustWithdrawException.hpp
 *
 *  Created on: 13 ene. 2020
 *      Author: webins
 */

#ifndef ILLEGALTRUSTWITHDRAWEXCEPTION_HPP_
#define ILLEGALTRUSTWITHDRAWEXCEPTION_HPP_

#include <iostream>
class IllegalTrustWithdrawException : public std::exception{
public:
	virtual const char * what() const noexcept{
		return "Illegal Withdraw Exception";
	};
	virtual ~IllegalTrustWithdrawException()= default;
};








#endif /* ILLEGALTRUSTWITHDRAWEXCEPTION_HPP_ */
