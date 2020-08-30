#include <iostream>

#include "myString.hpp"

using namespace std;


int main(){
	myString empty; // no args constructor
	myString Larry("Larry"); // overloaded constructor
	myString Stooge = Larry; //Copy constructor

	cout << "Enter a string" << endl;  //Extraction operator
	cin >> empty; //Insertion operator
	cout << "The string was " << empty << endl;

	cout << Larry << " Normal" << endl;
	cout << +Larry << " To upper case" << endl; //To upper operator
	cout << -Larry << " To lower case" << endl; //To lower operator

	cout << endl;
	return 0;
}

