#include "Shallow.hpp"


//constructor
Shallow::Shallow(int d){
	data = new int;
	*data = d;
}

//copy constructor
Shallow::Shallow(const Shallow &source)
	:data(source.data){
		std::cout << "Data: " << *data << " Copied" << std::endl;
	}


//destructor
Shallow::~Shallow(){
	std::cout << "Data: "<< *data << " Was destroyed" << std::endl;
	delete data;
}



//methods
int Shallow::getData(void){
	return *data;
}

void Shallow::setData(int d){
	*data = d;
}
