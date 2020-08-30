//DECLARATION OF ACCOUNT CLASS
#include <string>
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
class Account{
private:
	std::string name;
	double balance;

public:
	void setBalance(double);
	double getBalance(void);
	void setName(std::string);
	std::string getName(void);
	bool deposit(double);
	bool withdraw(double);
};
#endif
