/*
 * TrustAccount.hpp
 *
 *  Created on: Jan 6, 2020
 *      Author: webins
 */

#ifndef TRUSTACCOUNT_HPP_
#define TRUSTACCOUNT_HPP_

#include "SavingAccount.hpp"

class TrustAccount : public SavingAccount{
	friend std::ostream &operator<<(std::ostream &, const TrustAccount&);
private:
	int counter;
	static constexpr int threshold = 5000;
public:
	TrustAccount(std::string, double, double);
	TrustAccount(std::string, double);
	TrustAccount(std::string);
	TrustAccount();
	bool deposit(double amount);
	bool withdraw(double amount);
	int getCounter() const;
};







#endif /* TRUSTACCOUNT_HPP_ */
