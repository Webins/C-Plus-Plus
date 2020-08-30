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
protected:
	static int SavingIdentifier;
	double interestRate;
	int id;
public:
	static constexpr double defInterestRate = 3.0;
	SavingAccount(std::string, double, double);
	SavingAccount(std::string, double);
	SavingAccount(std::string);
	SavingAccount();

	virtual void print(std::ostream &) const override;
	virtual void deposit(double) override;
	virtual void withdraw(double) override;
	virtual std::string getName(void) const override;
	virtual double getBalance(void) const override;

	virtual ~SavingAccount()= default;
};








#endif /* SAVINGACCOUNT_HPP_ */
