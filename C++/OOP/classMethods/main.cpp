#include <iostream>

#include "Account.hpp" //HERE IS THE CLASS ACCOUNT DECLARATION
using namespace std;


//class Account{
//private:
//	string name;
//	double balance;
//
//public:
//	void setBalance(double);
//	double getBalance(void);
//	void setName(string);
//	string getName(void);
//
////Implementing methods inside a class
////	void setBalance(double b){
////		balance += b;
////	}
////	double getBalance(void){
////		return balance;
////	}
////	string setName(string n){
////		name = n;
////	}
////	string getName(void){
////		return name;
////	}
//};
//
////Implementing methods outside the class
//void Account::setBalance(double b){
//	balance +=b;
//}
//double Account::getBalance(void){
//	return balance;
//}
//void Account::setName(string n){
//		name = n;
//}
//string Account::getName(){
//	return name;
//}

int main(){
	Account Frank;
	Frank.setName("Frank");
	Frank.setBalance(5516.47);
	cout << "The " << Frank.getName() <<"'s account has a balance of " << Frank.getBalance() << "$" << endl;
	Frank.deposit(50000);
	cout << Frank.getName() << " Make a deposit for 50000. Now his balance is " << Frank.getBalance() << endl;
	Frank.withdraw(4785.574);
	cout << Frank.getName() << " Make a withdraw for 4785.574. Now his balance is " << Frank.getBalance() << endl;
	return 0;
}
