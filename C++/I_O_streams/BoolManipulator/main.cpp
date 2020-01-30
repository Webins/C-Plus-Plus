#include <iostream>
#include <iomanip> //must include for manipulators


int main(){
	std::cout << "noboolalpha -default (10==10): " << (10==10) <<std::endl;
	std::cout << "noboolalpha -default (20==10): " << (20==10) <<std::endl;

	//set true/false formatting
	std::cout << std::boolalpha;

	std::cout << "boolalpha (10==10): " << (10==10) <<std::endl;
	std::cout << "boolalpha (20==10): " << (20==10) <<std::endl;
	//setting is still valid for future booleans insertion
	std::cout << "boolalpha (10==10): " << (10==10) <<std::endl;
	std::cout << "boolalpha (20==10): " << (20==10) <<std::endl;

	//setting again to noboolalpha
	std::cout << std::noboolalpha;
	std::cout << "noboolalpha (10==10): " << (10==10) <<std::endl;
	std::cout << "noboolalpha (20==10): " << (20==10) <<std::endl;

	//set back to boolalpha with setf
	std::cout.setf(std::ios::boolalpha);
	std::cout << "boolalpha (10==10): " << (10==10) <<std::endl;
	std::cout << "boolalpha (20==10): " << (20==10) <<std::endl;

	//reset to default
	std::cout << resetiosflags(std::ios::boolalpha);
	std::cout << "Default (10==10): " << (10==10) <<std::endl;
	std::cout << "Default (20==10): " << (20==10) <<std::endl;
	return 0;
}
