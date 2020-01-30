#include <iostream>
#include <iomanip> //must include for manipulators
#include <bitset>
int main(){
	int num = 255;
	//displaying using different bases
	std::cout << "-------------------------------------------------------------------" << std::endl;
	std::cout << "displaying using different bases" << std::endl;
	std::cout << std::dec << num << std::endl;
	std::cout << std::oct << num << std::endl;
	std::cout << std::hex << num << std::endl;
	std::cout << std::bitset<8>(num) << std::endl;

	//displaying showing the base prefix for hex and oct
	std::cout << "-------------------------------------------------------------------" << std::endl;
	std::cout << "displaying showing the base prefix for hex and oct" << std::endl;
	std::cout << std::showbase;
	std::cout << std::dec << num << std::endl;
	std::cout << std::oct << num << std::endl;
	std::cout << std::hex << num << std::endl;
	std::cout << std::bitset<8>(num) << std::endl;

	//displaying the hex with uppercase
	std::cout << "-------------------------------------------------------------------" << std::endl;
	std::cout << "displaying the hex with uppercase" << std::endl;
	std::cout << std::uppercase;
	std::cout << std::hex << num << std::endl;

	//displaying the +sign in fron on dec base number
	std::cout << "-------------------------------------------------------------------" << std::endl;
	std::cout << "displaying the +sign in fron on dec base number" << std::endl;
	std::cout << std::showpos;
	std::cout << std::dec << num << std::endl;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	//setting use the set method
	std::cout.setf(std::ios::showbase);
	std::cout.setf(std::ios::uppercase);
	std::cout.setf(std::ios::showpos);

	//resetting to default
	std::cout << std::resetiosflags(std::ios::showbase);
	std::cout << std::resetiosflags(std::ios::basefield);
	std::cout << std::resetiosflags(std::ios::uppercase);
	std::cout << std::resetiosflags(std::ios::showpos);


	return 0;
}
