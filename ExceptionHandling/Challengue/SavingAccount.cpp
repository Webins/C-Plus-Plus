#include "SavingAccount.hpp"
int SavingAccount::SavingIdentifier = 0;


SavingAccount::SavingAccount(std::string nameVal, double balanceVal, double interestVal)
	:Account(nameVal, balanceVal), interestRate(interestVal), id(++SavingIdentifier){};

SavingAccount::SavingAccount(std::string nameVal, double balanceVal)
	:SavingAccount(nameVal, balanceVal, defInterestRate){};

SavingAccount::SavingAccount(std::string nameVal)
	:SavingAccount(nameVal,0.0,defInterestRate){};

SavingAccount::SavingAccount()
	:SavingAccount("Unnamed Saving account", 0.0, defInterestRate){};


void SavingAccount::deposit(double amount){
	amount = amount + ((amount * interestRate)/100);
	Account::deposit(amount);
}

void SavingAccount::withdraw(double amount){
	Account::withdraw(amount);
}

void SavingAccount::print(std::ostream &os) const{
	os << "[Account type: Saving, Name: " << name << ", Balance: " << balance << ", Interest rate: " <<interestRate << ", Id: " << id <<  "]";
}

std::string SavingAccount::getName(void) const{
	return name;
}
double SavingAccount::getBalance(void) const{
	return balance;
}

