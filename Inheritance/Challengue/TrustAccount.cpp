#include "TrustAccount.hpp"

std::ostream &operator<<(std::ostream &os, const TrustAccount&ta){
	os << "[" <<"Trust account name: "<< ta.getName() << ", Balance: " << ta.getBalance() << ", Interest rate: "<< ta.getInterestRate() << ", Withdraw per year: " << ta.getCounter() <<", Id: " <<  ta.getId() << "]\n";
	return os;
}


TrustAccount::TrustAccount()
	:SavingAccount(), counter(0){};

TrustAccount::TrustAccount(std::string nameVal)
	:SavingAccount(nameVal), counter(0){};

TrustAccount::TrustAccount(std::string nameVal, double balanceVal)
	:SavingAccount(nameVal, balanceVal), counter(0){};

TrustAccount::TrustAccount(std::string nameVal, double balanceVal, double interestRateVal)
	:SavingAccount(nameVal, balanceVal, interestRateVal), counter(0){};

int TrustAccount::getCounter() const{
	return counter;
}
bool TrustAccount::deposit(double amount){
	if(amount >= threshold){
		return SavingAccount::deposit(amount + 50.0);
	}
	else return SavingAccount::deposit(amount);
}


bool TrustAccount::withdraw(double amount){
	if(amount >=  ((getBalance() * 20 )/ 100)){
		std::cout << "Cannot make the withdraw for: " << getName() << std::endl;
		std::cout <<"This type of account only accepts withdraw lesser than the 20% of the account balance" << std::endl;
		return false;
	}
	else if(getCounter() >= 3){
		std::cout << "Cannot make the withdraw for: " << getName() << std::endl;
		std::cout <<"This type of account only accepts three withdraws per year" << std::endl;
		return false;
	}
	if(SavingAccount::withdraw(amount)){
		counter++;
		return true;
	}
	else return false;
}




