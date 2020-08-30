#include <iostream>

void func_a(void);
void func_b(void);
void func_c(void);

int main(){
	std::cout << "Starting Main" << std::endl;
	try{
	func_a();
	}catch(int &e){
		std::cout << "Caught error in main" << std::endl;
	}
	std::cout << "Ending Main" << std::endl;
	return 0;

}

void func_a(){
	std::cout << "Starting func a" << std::endl;
	func_b();
	std::cout << "Ending func a" << std::endl;
}

void func_b(){
	std::cout << "Starting func b" << std::endl;
	func_c();
	std::cout << "Ending func b" << std::endl;
}

void func_c(){
	std::cout << "Starting func c" << std::endl;
	throw 100;
	std::cout << "Ending func c" << std::endl;
}
