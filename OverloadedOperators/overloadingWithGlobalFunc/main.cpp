#include <iostream>

#include "myString.hpp"

using namespace std;


int main(){
	myString empty; // no args constructor
	myString Larry("Larry"); // overloaded constructor
	myString Stooge = Larry; //Copy constructor
	empty.display(); //method to display the str
	Larry.display();
	Stooge.display();
	empty = Larry;
	empty.display();
	empty + " " + Larry;
	empty.display();

	Stooge = "Un string";
	Stooge.display();
	+Stooge;
	Stooge.display();
	-Stooge;
	Stooge.display();
	cout << boolalpha;
	bool true_false = Stooge == Larry;
	cout << boolalpha << true_false << endl;
	return 0;
}

