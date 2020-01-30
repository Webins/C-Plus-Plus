#include "Account.hpp"

int Account::createdAccounts = 0;

Account::Account(std::string nameVal, double balanceVal)
	:name(nameVal), balance(balanceVal){
	if(balanceVal < 0) throw IllegalBalanceException();
	createdAccounts++;
}

Account::Account(std::string nameVal)
	:Account(nameVal, 0.0){};

Account::Account()
	:Account("Unnamed Account", 0.0){};

void Account::deposit(double amount){
	if(amount <=0) {
		std::cout << "Can deposit an amount lesser or equal than zero" << std::endl;
		throw IllegalAmountException();
	}
	balance+=amount;
}

void Account::withdraw(double amount){
	if(amount > balance) {
		std::cout << "Cant withdraw the amount of " << amount << "\nNot enough funds" << std::endl;
		throw InsufficientFundsException();
	}
	balance -=amount;
}

int Account::getTotalAccounts(void){
	return createdAccounts;
}
