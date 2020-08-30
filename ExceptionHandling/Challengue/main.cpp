#include <iostream>
#include <vector>
#include <memory>
#include "SavingAccount.hpp"
#include "TrustAccount.hpp"
#include "CheckingAccount.hpp"
#include "Account.hpp"
#include "Accounts_Util.hpp"
#include "IllegalBalanceException.hpp"
#include "InsufficientFundsException.hpp"
#include "IllegalAmountException.hpp"
#include "IllegalTrustWithdrawException.hpp"
using namespace std;


int main(){
	vector<unique_ptr<Account>> Accounts;
	unique_ptr<Account> Larry;
	unique_ptr<Account> Peter;
	unique_ptr<Account> Laura;
	unique_ptr<Account> Elliot;
	unique_ptr<Account> Jean;
	unique_ptr<Account> Griffin;
	try{
	Larry = make_unique<CheckingAccount>("Larry", 1000);
	Peter = make_unique<SavingAccount>("Peter", 1000, 5.00);
	Laura = make_unique<TrustAccount>("Laura", 1600, 8.00);
	Elliot = make_unique<CheckingAccount>("Elliot", 1000);
	Jean = make_unique<SavingAccount>("Jean", 1000, 5.00);
	Griffin = make_unique<TrustAccount>("Griffin", 1600, 8.00);
	}catch(const IllegalBalanceException &e){
		cerr << e.what() << endl;
	}
	Accounts.push_back(move(Larry));
	Accounts.push_back(move(Peter));
	Accounts.push_back(move(Laura));
	Accounts.push_back(move(Elliot));
	Accounts.push_back(move(Jean));
	Accounts.push_back(move(Griffin));
	try{
	depositAll(Accounts, 15000);
	withdrawAll(Accounts, 2000);
	depositAll(Accounts, 15000);
	depositAll(Accounts, 15000);
	withdrawAll(Accounts, 5000);
	depositAll(Accounts, 15000);
	withdrawAll(Accounts, 5000);
	withdrawAll(Accounts,2000);
	withdrawAll(Accounts,2000);
	withdrawAll(Accounts,2000);
	display(Accounts);
	}catch(const InsufficientFundsException &e){
		cerr << e.what() << endl;
	}catch(const IllegalAmountException &e){
		cerr << e.what() << endl;
	}catch(const IllegalTrustWithdrawException &e){
		cerr << e.what() << endl;
	}

	cout << "Total Accounts created: " << Larry -> getTotalAccounts() << endl;

	return 0;

}




