#include <iostream>
#include "Account.hpp"
#include "SavingAccount.hpp"
using namespace std;

void display(Account);
void display(SavingAccount);
int main(){
	Account frank;
	frank.deposit(1500);
	display(frank);
	Account f;
	display(f);
	SavingAccount ola;
	display(ola);
	return 0;
}

void display(Account a){
	cout << "Account name: " << a.getName() << endl;
	cout << "Account Balance: " << a.getBalance() << endl;
	cout << "Account Id: " << a.getId() << endl;
}


void display(SavingAccount a){
	cout << "Account name: " << a.getName() << endl;
	cout << "Account Balance: " << a.getBalance() << endl;
	cout << "Account Id: " << a.getId() << endl;
	cout << "Account rate: " << a.getIntRate() << endl;
}
