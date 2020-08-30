#include "myString.hpp"



//Global functions

//streams extraction and insertion
	std::ostream &operator<<(std::ostream &os, const myString &rhs){
		os << rhs.str;
		return os;
	}
	std::istream &operator>>(std::istream &is, myString &rhs){
		char * buffer = new char[1000];
		is >> buffer;
		rhs = myString(buffer);
		delete [] buffer;
		return is;
	}

//Member operators overloading
//Object concat
myString myString::operator+(const myString &rhs) const{
	char * buffer = new char[(std::strlen(this->str)+1) + (std::strlen(rhs.str) +1)];
	std::strcpy(buffer, this->str);
	std::strcat(buffer, rhs.str);
	myString buff(buffer);
	delete [] buffer;
	return buff;
}

myString myString::operator+(myString &&rhs) const{
	char * buffer = new char[(std::strlen(this->str)+1) + (std::strlen(rhs.str) +1)];
	std::strcpy(buffer, this->str);
	std::strcat(buffer, rhs.str);
	myString buff(buffer);
	rhs = nullptr;
	delete [] buffer;
	return buff;
}

myString& myString::operator+=(const myString&rhs){
	char *buffer = new char[(std::strlen(this->str)+1) + (std::strlen(rhs.str)+1)];
	std::strcpy(buffer, this->str);
	std::strcat(buffer, rhs.str);
	*this = myString(buffer);
	delete [] buffer;
	return *this;
}

myString& myString::operator+=(myString&&rhs){
	char *buffer = new char[(std::strlen(this->str)+1) + (std::strlen(rhs.str)+1)];
	std::strcpy(buffer, this->str);
	std::strcat(buffer, rhs.str);
	*this = myString(buffer);
	rhs = nullptr;
	delete [] buffer;
	return *this;
}

//Object compare
bool myString::operator==(const myString &rhs) const{
	return(std::strcmp(this->str, rhs.str) ==0);
}
bool myString::operator!=(const myString&rhs) const{
	return(std::strcmp(this->str, rhs.str) !=0);
}
bool myString::operator>(const myString&rhs) const{
	return(std::strcmp(this->str, rhs.str) > 0);
}
bool myString::operator<(const myString&rhs) const{
	return(std::strcmp(this->str, rhs.str) < 0);
}

//Repeat
myString myString::operator*(size_t repeat){
	char *buffer = new char[(std::strlen(this->str)+1) * (repeat)];
	std::strcpy(buffer, this->str);
	repeat = repeat -1;
	for(; repeat != 0; repeat--)
		std::strcat(buffer, this->str);

	myString buf(buffer);
	delete [] buffer;
	return buf;
}
myString& myString::operator*=(size_t repeat){
	char *buffer = new char[(std::strlen(this->str)+1) * (repeat)];
	std::strcpy(buffer, this->str);
	repeat = repeat -1;
	for(; repeat != 0; repeat--)
		std::strcat(buffer, this->str);

	*this = myString(buffer);
	delete [] buffer;
	return *this;
}


//Lower and upper
myString myString::operator -(void){
	for(unsigned int i =0; i < std::strlen(this->str ) +1; i++){
		*(this->str +i) = std::tolower(*(this->str +i));
	}
	return *this;
}

myString myString::operator +(void){
	for(unsigned int i =0; i < std::strlen(this->str ) +1; i++){
		*(this->str+i) = std::toupper(*(this->str+i));
	}
	return *this;
}

//pre-increment and post-increment

//Pre-increment
myString &myString::operator++(void){
	*this = *this + *this;
	return *this;
}

//Post-increment
myString myString::operator++(int){
	myString temp(*this);
	operator++();
	return temp;
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




