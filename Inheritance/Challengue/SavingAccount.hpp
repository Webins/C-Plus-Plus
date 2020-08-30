/*
 * SavingAccount.hpp
 *
 *  Created on: Jan 6, 2020
 *      Author: webins
 */

#ifndef SAVINGACCOUNT_HPP_
#define SAVINGACCOUNT_HPP_

#include <string>
#include <iostream>
#include "Account.hpp"

class SavingAccount:public Account{
	friend std::ostream &operator<<(std::ostream &, const SavingAccount&);
private:
	double interestRate;
	static constexpr double defInterestRate = 3.0;
public:
	SavingAccount(std::string, double, double);
	SavingAccount(std::string, double);
	SavingAccount(std::string);
	SavingAccount();

	bool deposit(double);

	double getInterestRate(void) const;

};








#endif /* SAVINGACCOUNT_HPP_ */
