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

		Larry += Stooge; // += Operator
		cout << Larry << endl;
		Larry+= " Me"; // += Operator
		cout << Larry <<endl;

		myString kleiver("Kleiver");
		kleiver = kleiver*5; //Repeat operator
		cout << kleiver << endl;
		myString Other("Xo");
		Other *= 5; // Repeat operator
		cout << Other << endl;

		cout << boolalpha;
		cout << (kleiver!= Other); //Compare operator
		cout << endl;
		cout << (kleiver > Other); //compare operator
		cout << endl;
		cout << (kleiver < Other); //compare operator
		cout << endl;
		cout << (kleiver == Other); //compare operator
		cout << endl;

		myString thisName("this");
		cout << ++thisName<< endl;
		cout << thisName++ << endl;
	return 0;
}

