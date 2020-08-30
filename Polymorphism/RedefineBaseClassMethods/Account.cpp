#include "Account.hpp"

int Account::id =0;


Account::Account(std::string nameVal, double balanceVal)
	:name(nameVal), balance(balanceVal){
	id++;
};

Account::Account()
	:Account(("Account" + std::to_string(id+1)), 0.0){
};

void Account::deposit(double amount){
	balance +=amount;
}

void Account::withdraw(double amount){
	if(amount > balance) std::cout  << "There is not such amount in your account" << std::endl;
	else balance -= amount;
}

std::string Account::getName(void){
	return name;
}

double Account::getBalance(void){
	return balance;
}

int Account::getId(void){
	return id;
}
