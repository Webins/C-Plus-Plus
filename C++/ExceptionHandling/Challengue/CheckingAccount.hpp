/*
 * CheckingAccount.hpp
 *
 *  Created on: Jan 6, 2020
 *      Author: webins
 */

#ifndef CHECKINGACCOUNT_HPP_
#define CHECKINGACCOUNT_HPP_

#include "Account.hpp"

class CheckingAccount : public Account{
	friend std::ostream & operator<<(std::ostream &, const CheckingAccount &);

	static int checkingIdentifier;
	static constexpr double fee =  1.50;
	int id;
public:
	CheckingAccount();
	CheckingAccount(std::string);
	CheckingAccount(std::string, double);
	virtual void print(std::ostream &) const override;
	virtual void withdraw(double) override;
	virtual void deposit(double) override;
	virtual std::string getName(void) const override;
	virtual double getBalance(void) const override;

	virtual ~CheckingAccount() = default;
};







#endif /* CHECKINGACCOUNT_HPP_ */
