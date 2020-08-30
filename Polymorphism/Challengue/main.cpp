#include <iostream>
#include "SavingAccount.hpp"
#include "TrustAccount.hpp"
#include "CheckingAccount.hpp"
#include "Account.hpp"
#include "Accounts_Util.hpp"
#include <vector>
using namespace std;


int main(){
	vector<Account * > Accounts;
	Account *ca = new CheckingAccount("Checking Account", 1000);
	Account *sa = new SavingAccount("Saving Account", 1000, 5.00);
	Account *ta = new TrustAccount("Trust Account", 1600, 8);
	Account *ca1 = new CheckingAccount("Checking Account1", 1000);
	Account *sa1 = new SavingAccount("Saving Account1", 1000, 5.00);
	Account *ta1 = new TrustAccount("Trust Account1", 1600, 8);
	Account *ca2= new CheckingAccount("Checking Account2", 1000);
	Account *sa2 = new SavingAccount("Saving Account2", 1000, 5.00);
	Account *ta2 = new TrustAccount("Trust Account2", 1600, 8);
	Accounts.push_back(ca);
	Accounts.push_back(sa);
	Accounts.push_back(ta);
	Accounts.push_back(ca1);
	Accounts.push_back(sa1);
	Accounts.push_back(ta1);
	Accounts.push_back(ca2);
	Accounts.push_back(sa2);
	Accounts.push_back(ta2);

	depositAll(Accounts, 15000);
	withdrawAll(Accounts, 2000);
	depositAll(Accounts, 15000);
	withdrawAll(Accounts, 5000);
	depositAll(Accounts, 15000);
	withdrawAll(Accounts, 5000);
	depositAll(Accounts, 15000);
	withdrawAll(Accounts, 5000);
	display(Accounts);

	cout << "Total Accounts created: " << ca -> getTotalAccounts() << endl;

	delete ca;
	delete sa;
	delete ta;


	return 0;

}




