#include <iostream>
#include "Base.hpp"
#include "Derived.hpp"
using namespace std;


int main(){
	Base b(100); //constructor
	Base b1 (b); //copy constructor
	b = b1; 	// copy assigment

	Derived d(100); //constructor
	Derived d1(d); //copy constructor
	d = d1; 	// copy assigment

	return 0;
}
