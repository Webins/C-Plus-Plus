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
	char * buffer = new char[(std::strlen(str)+1) + (std::strlen(newString.str) +1)];
	std::strcpy(buffer, str);
	std::strcat(buffer, newString.str);
	delete [] this -> str;
	this -> str = buffer;
	return *this;
}

myString &myString::operator+(myString && newString){
	char * buffer = new char[(std::strlen(str)+1) + (std::strlen(newString.str) +1)];
	std::strcpy(buffer, str);
	std::strcat(buffer, newString.str);
	delete [] this -> str;
	this -> str = buffer;
	newString = nullptr;
	return *this;
}

//Object compare
bool myString::operator==(const myString &newString) const{
	return(std::strcmp(this -> str, newString.str) ==0);
}

myString &myString::operator -(void){
	for(unsigned int i =0; i < std::strlen(this ->str) +1; i++){
		*(this->str +i) = std::tolower(*(this->str +i));
	}
	return *this;
}

myString &myString::operator +(void){
	for(unsigned int i =0; i < std::strlen(this ->str) +1; i++){
		*(this->str +i) = std::toupper(*(this->str +i));
	}
	return *this;
}



