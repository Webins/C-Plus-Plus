//IMPLEMENTATION OF ACCCOUNT CLASS
#include "Account.hpp"

//Implementing methods in separate files
void Account::setBalance(double b){
	balance +=b;
}
double Account::getBalance(void){
	return balance;
}
void Account::setName(std::string n){
		name = n;
}
std::string Account::getName(){
	return name;
}

bool Account::deposit(double d){
	if(d > 0) {
		balance+= d;
		return true;
	}
	else return false;
}

bool Account::withdraw(double w){
	if(balance >= w){
		balance-= w;
		return true;
	}
	else return false;
}
