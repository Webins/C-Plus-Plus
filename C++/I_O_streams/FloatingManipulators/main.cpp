#include <iostream>
#include <iomanip>


int main(){

	double num1 = 123456789.987654321, num2 = 1234.5678, num3 = 1234.0;
	std::cout << "================================== Default:==================================" << std::endl;
	std::cout << "Num1: " << num1 << std::endl;
	std::cout << "Num2: " << num2 << std::endl;
	std::cout << "Num3: " << num3 << std::endl;

	std::cout << "============================Set Precision to (2):============================" << std::endl;
	std::cout << std::setprecision(2);
	std::cout << "Num1: " << num1 << std::endl;
	std::cout << "Num2: " << num2 << std::endl;
	std::cout << "Num3: " << num3 << std::endl;

	std::cout << "============================Set Precision to (5):============================" << std::endl;
	std::cout << std::setprecision(5);
	std::cout << "Num1: " << num1 << std::endl;
	std::cout << "Num2: " << num2 << std::endl;
	std::cout << "Num3: " << num3 << std::endl;

	std::cout << "============================Set Precision to (9):============================" << std::endl;
	std::cout << std::setprecision(9);
	std::cout << "Num1: " << num1 << std::endl;
	std::cout << "Num2: " << num2 << std::endl;
	std::cout << "Num3: " << num3 << std::endl;

	std::cout << "=======================Set Precision to (3) and fixed:=======================" << std::endl;
	std::cout << std::setprecision(3) << std::fixed;
	std::cout << "Num1: " << num1 << std::endl;
	std::cout << "Num2: " << num2 << std::endl;
	std::cout << "Num3: " << num3 << std::endl;

	std::cout << "=============Set Precision to (3), fixed and scientific notation:=============" << std::endl;
	std::cout << std::setprecision(3) << std::fixed << std::scientific;
	std::cout << "Num1: " << num1 << std::endl;
	std::cout << "Num2: " << num2 << std::endl;
	std::cout << "Num3: " << num3 << std::endl;

	std::cout << "======= Set Precision to (3), fixed, scientific notation and uppercase:=======" << std::endl;
	std::cout << std::setprecision(3) << std::fixed << std::scientific << std::uppercase;
	std::cout << "Num1: " << num1 << std::endl;
	std::cout << "Num2: " << num2 << std::endl;
	std::cout << "Num3: " << num3 << std::endl;

	std::cout << "===================Set Precision to (3), fixed and showpos:===================" << std::endl;
	std::cout << std::setprecision(3) << std::fixed << std::showpos;
	std::cout << "Num1: " << num1 << std::endl;
	std::cout << "Num2: " << num2 << std::endl;
	std::cout << "Num3: " << num3 << std::endl;

	std::cout << "===============================Back to Default:===============================" << std::endl;
	std::cout.unsetf(std::ios::scientific | std::ios::fixed);
	std::cout << std::resetiosflags(std::ios::showpos);
	std::cout << "Num1: " << num1 << std::endl;
	std::cout << "Num2: " << num2 << std::endl;
	std::cout << "Num3: " << num3 << std::endl;

	std::cout << "=====================Set Precision to (10) and showpoint:=====================" << std::endl;
	std::cout << std::setprecision(10) << std::showpoint;
	std::cout << "Num1: " << num1 << std::endl;
	std::cout << "Num2: " << num2 << std::endl;
	std::cout << "Num3: " << num3 << std::endl;

	std::cout << "===============================Back to Default:===============================" << std::endl;
	std::cout << std::resetiosflags(std::ios::showpoint);
	std::cout << std::resetiosflags(std::ios::fixed);
	std::cout << std::resetiosflags(std::ios::scientific);
	std::cout << std::resetiosflags(std::ios::showpos);
	std::cout << std::setprecision(6);
	std::cout << "Num1: " << num1 << std::endl;
	std::cout << "Num2: " << num2 << std::endl;
	std::cout << "Num3: " << num3 << std::endl;

	return 0;
}
