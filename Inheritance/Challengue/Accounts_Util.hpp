/*
 * Accounts_Util.hpp
 *
 *  Created on: Jan 6, 2020
 *      Author: webins
 */

#ifndef ACCOUNTS_UTIL_HPP_
#define ACCOUNTS_UTIL_HPP_
#include "Account.hpp"
#include"SavingAccount.hpp"
#include "CheckingAccount.hpp"
#include "TrustAccount.hpp"

#include <vector>
void display(std::vector<Account>&);
void display(std::vector<SavingAccount>&);
void display(std::vector<CheckingAccount>&);
void display(std::vector<TrustAccount>&);

void depositAll(std::vector<Account>&, double);
void depositAll(std::vector<SavingAccount>&, double);
void depositAll(std::vector<CheckingAccount>&, double);
void depositAll(std::vector<TrustAccount>&, double);

void withdrawAll(std::vector<Account>&, double);
void withdrawAll(std::vector<SavingAccount>&, double);
void withdrawAll(std::vector<CheckingAccount>&, double);
void withdrawAll(std::vector<TrustAccount>&, double);






#endif /* ACCOUNTS_UTIL_HPP_ */
