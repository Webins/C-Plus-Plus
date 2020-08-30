/*
 * Accounts_Util.hpp
 *
 *  Created on: Jan 6, 2020
 *      Author: webins
 */

#ifndef ACCOUNTS_UTIL_HPP_
#define ACCOUNTS_UTIL_HPP_
#include "Account.hpp"
#include <memory>
#include <vector>
void display(std::vector<std::unique_ptr<Account>>&);
void depositAll(std::vector<std::unique_ptr<Account>>&, double);
void withdrawAll(std::vector<std::unique_ptr<Account>>&, double);


#endif /* ACCOUNTS_UTIL_HPP_ */
