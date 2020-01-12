#include "Move.hpp"


//constructor
Move::Move(int d){
	data = new int;
	*data = d;
}

//copy constructor
Move::Move(const Move &source)
	:Move(*source.data){
	std::cout << "Data: " << *data << " Copied" << std::endl;
}

//move constructor
Move::Move(Move &&source)
	:data(source.data){
	source.data = nullptr;
	std::cout << "Data: " << *data << " Moved" << std::endl;
}

//destructor
Move::~Move(){
	if(data != nullptr) std::cout << "Data: "<< *data << " Was destroyed" << std::endl;
	else std::cout << "Data destroyed for nullptr" << std::endl;
	delete data;
}



//methods
int Move::getData(void){
	return *data;
}

void Move::setData(int d){
	*data = d;
}
