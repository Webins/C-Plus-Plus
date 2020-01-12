#include "SavingAccount.hpp"

std::ostream &operator<<(std::ostream &os, const SavingAccount &sa){
	os <<"[Saving Account name : "<< sa.getName() << ", Balance: " << sa.getBalance() << ", Interest rate: " << sa.interestRate << ", Id: " <<  sa.getId() << "]\n";
	return os;
}
SavingAccount::SavingAccount(std::string nameVal, double balanceVal, double interestVal)
	:Account(nameVal, balanceVal), interestRate(interestVal){};

SavingAccount::SavingAccount(std::string nameVal, double balanceVal)
	:Account(nameVal, balanceVal), interestRate(defInterestRate){};

SavingAccount::SavingAccount(std::string nameVal)
	:Account(nameVal), interestRate(defInterestRate){};

SavingAccount::SavingAccount()
	:Account(), interestRate(defInterestRate){};


bool SavingAccount::deposit(double amount){
	amount = amount + ((amount * interestRate)/100);
	return Account::deposit(amount);
}

double SavingAccount::getInterestRate(void) const{
	return interestRate;
}
