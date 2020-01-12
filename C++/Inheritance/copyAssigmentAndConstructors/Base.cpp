#include "Base.hpp"


Base::Base(int integerVal)
	:integer(integerVal){
	std::cout << "Constructor one arg Base called" << std::endl;
}

Base::Base()
	:Base(0) {
	std::cout << "Contructor no args Base called" << std::endl;
}


Base::~Base(){
	std::cout << "Destructor Base called" << std::endl;
}

Base::Base(const Base &obj)
	:Base(obj.integer){
	std::cout <<"copy constructor Base called" << std::endl;
};



Base&::Base::operator=(const Base &rhs){
	if(this == &rhs) return *this;
	integer = rhs.integer;
	std::cout <<"copy assigment Base called" << std::endl;
	return *this;
}



