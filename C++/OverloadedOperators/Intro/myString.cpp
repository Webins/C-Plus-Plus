#include "myString.hpp"


//constructor
myString::myString()
	:str(nullptr){
		str = new char[1];
		*str ='\0';
	}

myString::myString(const char *s)
	:str(nullptr){
		if(s == nullptr) myString();
		else {
			str = new char[std::strlen(s)+1];
			std::strcpy(str, s);
		}
	}


myString::myString(const myString &source)
	:str(nullptr){
		str= new char[std::strlen(source.str) +1];
		std::strcpy(str,source.str);
}

myString::myString(myString &&source)
	:str(source.str){
		source.str = nullptr;
	}



//destructor
myString::~myString(){
	delete [] str;
}



//methods
size_t myString::getLenght(void) const{
	return (std::strlen(str));
}

const char * myString::getString() const{
	return str;
}

void myString::display(void) const{
	std::cout << str <<std::endl;
}

// objects assignments
myString &myString::operator=(const myString &newString){
	if(this == &newString) return *this;

	delete [] this->str;

	str = new char[std::strlen(newString.str)+1];
	std::strcpy(str,newString.str);

	return *this;
}

myString &myString::operator =(myString && newString){

	if(this == &newString) return *this;

	delete [] this->str;

	this -> str = newString.str;
	newString.str = nullptr;

	return *this;
}

//Object concat
myString &myString::operator+(const myString &newString){
	std::strcat(str, newString.str);
	return *this;
}

myString &myString::operator+(myString && newString){
	std::strcat(str, newString.str);
	newString = nullptr;
	return *this;
}


