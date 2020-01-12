#include "Deep.hpp"


//constructor
Deep::Deep(int d){
	data = new int;
	*data = d;
}

//copy constructor
//Deep::Deep(const Deep &source){
//	data = new int;
//	*data =*source.data;
//	std::cout << "Data: " << *data << " Copied" << std::endl;
//}

//Puedo hacerlo de las dos formas, Delegating constructor V
Deep::Deep(const Deep &source)
	:Deep(*source.data){
	std::cout << "Data: " << *data << " Copied" << std::endl;
}


//destructor
Deep::~Deep(){
	std::cout << "Data: "<< *data << " Was destroyed" << std::endl;
	delete data;
}



//methods
int Deep::getData(void){
	return *data;
}

void Deep::setData(int d){
	*data = d;
}
