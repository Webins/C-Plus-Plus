#include "myString.hpp"



//Global functions

//Object concat
myString operator+(const myString &lhs, const myString &rhs){
	char * buffer = new char[(std::strlen(lhs.str)+1) + (std::strlen(rhs.str) +1)];
	std::strcpy(buffer, lhs.str);
	std::strcat(buffer, rhs.str);
	myString buff(buffer);
	return buff;
}

myString operator+(const myString &lhs, myString &&rhs){
	char * buffer = new char[(std::strlen(lhs.str)+1) + (std::strlen(rhs.str) +1)];
	std::strcpy(buffer, lhs.str);
	std::strcat(buffer, rhs.str);
	myString buff(buffer);
	rhs = nullptr;
	return buff;
}

//Object compare
bool operator==(const myString &lhs, const myString &rhs){
	return(std::strcmp(lhs.str, rhs.str) ==0);
}


myString operator -(myString &obj){
	for(unsigned int i =0; i < std::strlen(obj.str) +1; i++){
		*(obj.str +i) = std::tolower(*(obj.str+i));
	}
	return obj;
}

myString operator +(myString &obj){
	for(unsigned int i =0; i < std::strlen(obj.str) +1; i++){
		*(obj.str +i) = std::toupper(*(obj.str+i));
	}
	return obj;
}


//member operator overloading
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




