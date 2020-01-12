#include "Account.hpp"

int Account::identifier = 0;

std::ostream &operator<<(std::ostream &os, const Account&a){
	os << "[" <<"Account name: "<< a.name << ", Balance: " << a.balance << ", Id: " <<  a.id << "]\n";
	return os;
}

Account::Account(std::string nameVal, double balanceVal)
	:name(nameVal), balance(balanceVal), id(identifier){
	identifier++;
}

Account::Account(std::string nameVal)
	:Account(nameVal, 0.0){}

Account::Account()
	:Account("Unnamed Account", 0.0){}

bool Account::deposit(double amount){
	if(amount <= 0){
		std::cout << "Cannot deposit an amount lesser than 0" << std::endl;
		return false;
	}
	balance += amount;
	return true;
}

bool Account::withdraw(double amount){
	if(amount > balance) {
		std::cout << "not enough funds" << std::endl;
		return false;
	}
	balance -= amount;
	return true;
}

std::string Account::getName(void) const{
	return name;
}

double Account::getBalance(void) const{
	return balance;
}

int Account::getId(void) const{
	return id;
}
