#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Account{
public:
	virtual void withdraw(double amount) const{
		cout << "Account::Withdraw"  << endl;
	}
	virtual ~Account(){}
};

class Checking : public Account{
public:
	virtual void withdraw(double amount)const override{
		cout << "Checking::Withdraw"  << endl;
	}
	virtual ~Checking(){}
};

class Saving : public Account{
public:
	virtual void withdraw(double amount)const override{
		cout << "Saving::Withdraw"  << endl;
	}
	virtual ~Saving(){}
};

class Trust : public Saving{
public:
	virtual void withdraw(double amount)const override{
		cout << "Trust::Withdraw"  << endl;
	}
	virtual ~Trust(){}
};

void do_withdraw(Account &, double);

int main(){
	Account a;
	Account &ref = a;
	ref.withdraw(1000); // Account::withdraw

	Trust t;
	Account &ref1 = t;
	ref1.withdraw(1000); //Trust::withdraw

	Account account;
	Saving saving;
	Checking checking;
	Trust trust;

	do_withdraw(account, 1500); //Account::withdraw
	do_withdraw(saving, 1500); //Saving::withdraw
	do_withdraw(checking, 1500); //Checking::withdraw
	do_withdraw(trust, 1500); //Trust::withdraw


	return 0;
}

void do_withdraw(Account &account, double amount){
	account.withdraw(amount);
}
