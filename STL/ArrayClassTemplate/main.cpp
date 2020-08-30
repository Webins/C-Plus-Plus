#include <iostream>
#include <string>
#include "Array.hpp"


int main(){

	Array<int, 5> nums;
	std::cout << nums.getSize() << std::endl;
	nums.fill(10);
	std:: cout << nums << std::endl;

	nums[0] = 5000;
	nums[3] = 1050;

	Array<double, 20> nums2;
	nums2.fill(5.55);
	std::cout << nums2 << std::endl;

}
