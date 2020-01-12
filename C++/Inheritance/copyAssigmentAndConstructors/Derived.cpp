#include "Derived.hpp"

Derived::Derived(void)
	:Base::Base(), integerTwo(0){
	std::cout << "Constructor no args Derived called" << std::endl;
}

Derived::Derived(int integerVal)
	:Base::Base(integerVal), integerTwo(0){
	std::cout << "Constructor one args Derived called" << std::endl;
}

//Derived::Derived(int integerVal, int integerValTwo)
//	:Base::Base(integerVal), integerTwo(integerValTwo){
//	std::cout << "Constructor two args Derived called" << std::endl;
//}

Derived::~Derived(void){
	std::cout << "Destructor called Derived" << std::endl;
}


Derived::Derived(const Derived &other)
	:Base(other), integerTwo(other.integerTwo){
	std::cout << "copy constructor called Derived" << std::endl;
}


Derived&::Derived::operator=(const Derived &rhs){
	if(this == &rhs)return *this;
	Base::operator=(rhs);
	integerTwo = rhs.integerTwo;
	std::cout << "copy assigment called Derived" << std::endl;
	return *this;
}

