/*
 * Account.hpp
 *
 *  Created on: 30 dic. 2019
 *      Author: webins
 */

#ifndef ACCOUNT_HPP_
#define ACCOUNT_HPP_
#include <string>
#include <iostream>
class Account{
	static int id;
public:
	std::string name;
	double balance;
	Account();
	Account(std::string, double);
	std::string getName(void);
	double getBalance(void);
	int getId(void);
	void deposit(double);
	void withdraw(double);
};



#endif /* ACCOUNT_HPP_ */
