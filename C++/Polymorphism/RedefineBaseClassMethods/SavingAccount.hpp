/*
 * SavingAccount.hpp
 *
 *  Created on: 30 dic. 2019
 *      Author: webins
 */

#ifndef SAVINGACCOUNT_HPP_
#define SAVINGACCOUNT_HPP_
#include "Account.hpp"

class SavingAccount:public Account {
public:
	double intRate;

	SavingAccount(double);
	SavingAccount();

	void deposit(double);
	double getIntRate(void);

	//withdraw is inherited
};



#endif /* SAVINGACCOUNT_HPP_ */
