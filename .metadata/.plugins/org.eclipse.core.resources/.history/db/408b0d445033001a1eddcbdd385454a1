#include "TrustAccount.hpp"

int TrustAccount::TrustIdentifier=0;


TrustAccount::TrustAccount(std::string nameVal, double balanceVal, double interestRateVal)
	:SavingAccount(nameVal, balanceVal, interestRateVal), counter(counterInit), id(++TrustIdentifier){};

TrustAccount::TrustAccount(std::string nameVal, double balanceVal)
	:TrustAccount(nameVal, balanceVal, defInterestRate){};

TrustAccount::TrustAccount(std::string nameVal)
	:TrustAccount(nameVal, 0.0, defInterestRate){};

TrustAccount::TrustAccount()
	:TrustAccount("Unnamed Trust account", 0.0, defInterestRate){};


bool TrustAccount::deposit(double amount){
	if(amount >= threshold){
		return SavingAccount::deposit(amount + 50.0);
	}
	else return SavingAccount::deposit(amount);
}


bool TrustAccount::withdraw(double amount){
	if(amount >=  ((balance * 20 )/ 100)){
		std::cout << "Cannot make the withdraw for: " << name << std::endl;
		std::cout <<"This type of account only accepts withdraw lesser than the 20% of the account balance" << std::endl;
		return false;
	}
	else if(counter >= 3){
		std::cout << "Cannot make the withdraw for: " << name << std::endl;
		std::cout <<"The account exceeded the withdrawal limit allowed per years" << std::endl;
		return false;
	}
	if(SavingAccount::withdraw(amount)){
		counter++;
		return true;
	}
	else return false;
}

void TrustAccount::print(std::ostream &os) const{
	os << "[Account type: Trust, Name: " << name << ", Balance: " << balance << ", Interest rate: " <<interestRate << ", Withdraws: " << counter << ", Id: " << id <<  "]";
}

std::string TrustAccount::getName(void) const{
	return name;
}
double TrustAccount::getBalance(void) const{
	return balance;
}


