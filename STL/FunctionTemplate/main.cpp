#include <iostream>
#include <string>

//macro
#define MAX(a, b) ((a) > (b) ? a : b)

template <typename T>
T min(T a, T b){
	return (a < b) ? a : b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b){
	std::cout << a << " " << b << std::endl;
}

struct Person{
	std::string name;
	int age;
	bool operator<(const Person &rhs) const{
		return this->age < rhs.age;
	}
};

std::ostream &operator<<(std::ostream &os, const Person p){
	return (os << p.name);
}

template <typename T>
void swap(T &a, T &b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}
int main(){
	//macro
	std::cout << MAX(48,40) << std::endl;

	Person p1 {"Carl", 30};
	Person p2 {"Mike", 20};
	std::cout  << "The youngest age is : "<< min<Person>(p1, p2).age << std::endl;
	func(p1, p2);
	std::cout << min<int>(5,8) << std::endl; //5
	std::cout << min(5,8) << std::endl; //5
	std::cout << min('A', 'B') << std::endl; //A
	std::cout << min(12.5, 3.777) << std::endl; //3.777
	std::cout << min(5+2*2, 7+40) << std::endl; //5+2*2

	func<int, int>(10,20);
	func(10,20);
	func<char, double> ('a', 25.047);
	func("string", 15);
	func(std::string{"OLA"}, 15);


	int x = 500, y =1000;
	swap(x, y);
	std::string arr = "string 1";
	std::string arr2 = "string 2";
	swap(arr, arr2);
	std::cout << x << " " << y << std::endl;
	std::cout << arr << " " << arr2 << std::endl;
	return 0;
}
