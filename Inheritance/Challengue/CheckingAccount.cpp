#include "CheckingAccount.hpp"

std::ostream &operator<<(std::ostream &os, const CheckingAccount&ca){
	os << "[" <<"Checking account name: "<< ca.getName() << ", Balance: " << ca.getBalance() << ", Id: " <<  ca.getId() << "]\n";
	return os;
}

CheckingAccount::CheckingAccount()
	:Account() {};
CheckingAccount::CheckingAccount(std::string nameVal)
	:Account(nameVal) {};

CheckingAccount::CheckingAccount(std::string nameVal, double balanceVal)
	:Account(nameVal, balanceVal) {};

bool CheckingAccount::withdraw(double amount){
		amount += fee;
		return Account::withdraw(amount);

}
