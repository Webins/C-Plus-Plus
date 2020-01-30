#include <iostream>
#include <string>
#include <vector>

template<typename T>
class Item{
	std::string name;
	T value;
public:
	Item(std::string name, T value)
	:name(name), value(value) {};
	std::string getName(void) const {return name;}
	T getValue(void) const {return value;}
};

template<typename T1, typename T2>
struct myPair{
	T1 first;
	T2 second;
};

int main(){
	Item<int> item1("Item1", 50);
	std::cout << item1.getName() << "|" << item1.getValue() << std::endl;
	Item<double> item2("Item2", 25.788);
	std::cout << item2.getName() << "|" << item2.getValue() << std::endl;
	Item<char> item3("Item3", 'C');
	std::cout << item3.getName() << "|" << item3.getValue() << std::endl;
	Item<Item<std::string>> item5("Item5", {"C++", "Professor"});
	std::cout << item5.getName() << "|" << item5.getValue().getName() << "|" << item5.getValue().getValue() << std::endl;

	myPair<std::string, int> p1{"Pair 1", 50};
	std::cout << p1.first << " " << p1.second << std::endl;
	myPair<double, char> p2{10.50, 'C'};
	std::cout << p2.first << " " << p2.second << std::endl;
	return 0;
}
