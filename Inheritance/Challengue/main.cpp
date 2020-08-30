#include <iostream>
#include "SavingAccount.hpp"
#include "Account.hpp"
#include "Accounts_Util.hpp"
#include <vector>
using namespace std;


int main(){
	vector<Account> Accounts;
	vector<SavingAccount> SavingAccounts;
	vector<TrustAccount> TrustAccounts;
	vector<CheckingAccount> CheckingAccounts;

	Accounts.push_back(Account("Frenkie", 1250));
	Accounts.push_back(Account("Pablo"));
	Accounts.push_back(Account());

	display(Accounts);
	depositAll(Accounts, 1000);
	withdrawAll(Accounts, 2000);
	display(Accounts);

	//SavingAccounts
	SavingAccounts.push_back(SavingAccount("Tyrell Wellick", 100000, 10));
	SavingAccounts.push_back(SavingAccount("Philip", 1500));
	SavingAccounts.push_back(SavingAccount("Elliot"));
	SavingAccounts.push_back(SavingAccount());

	display(SavingAccounts);
	depositAll(SavingAccounts, 1500);
	withdrawAll(SavingAccounts, 2500);
	display(SavingAccounts);

	//CheckingAccounts
	CheckingAccounts.push_back(CheckingAccount("Ronaldo", 133250));
	CheckingAccounts.push_back(CheckingAccount("Jose"));
	CheckingAccounts.push_back(CheckingAccount());

	display(CheckingAccounts);
	depositAll(CheckingAccounts, 100000);
	withdrawAll(CheckingAccounts, 20666);
	display(CheckingAccounts);


	//SavingAccounts
	TrustAccounts.push_back(TrustAccount("Cristiano Ronaldo", 7000000000, 12));
	TrustAccounts.push_back(TrustAccount("Arda", 157700));
	TrustAccounts.push_back(TrustAccount("James"));
	TrustAccounts.push_back(TrustAccount());

	display(TrustAccounts);
	depositAll(TrustAccounts, 150000);
	withdrawAll(TrustAccounts, 2500000);
	withdrawAll(TrustAccounts, 250);
	withdrawAll(TrustAccounts, 20);
	withdrawAll(TrustAccounts, 222);
	display(TrustAccounts);


	return 0;
}




