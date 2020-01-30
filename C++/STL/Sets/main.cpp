#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

class Person{
	friend ostream &operator<<(ostream &, const Person &);
	string name;
	int age;
public:
	Person(void) = default;
	Person(string nameVal, int ageVal)
		:name(nameVal), age(ageVal){}
	bool operator==(const Person &rhs){
		return (this->name == rhs.name && this->age == rhs.age);
	}
	bool operator<(const Person &rhs) const{
		return (this->age < rhs.age);
	}
	bool operator>(const Person &rhs) const{
			return (this->age > rhs.age);
	}
};

ostream &operator<<(ostream &os, const Person &obj){
	return (os << obj.name << ":" << obj.age);
}


template<typename T>
void display(set<T> & s){
	cout << "[";
	for(const auto &element: s){
		cout << element << " ";
	}
	cout <<"]" << endl;
}

void test1();
void test2();
void test3();

int main(){
	//test1();
	//test2();
	test3();
	return 0;
}


void test1(){
	set<int> s {1, 4, 5, 2,3 ,1};
	display(s);

	s = {1,2,1,2,2,3,3,4,5,6};
	display(s);

	s.insert(0);
	s.insert(10);

	if(s.count(10))
		cout << "10 is in the set" << endl;
	else cout << "10 is not in the set" << endl;

	auto it = s.find(5); //This find is part of the set, is smarter than the generic version for sets
	if(it!= s.end())
		cout << "Found: " << *it << endl;

	display(s);
	s.clear();

}

void test2(){
	set<Person> Stooges {
		{"Larry", 18},
		{"Jule", 23},
		{"Janeth", 29}
	};

	display(Stooges);

	Stooges.emplace("James", 32);
	display(Stooges);

	Stooges.emplace("Rodri", 32);
	display(Stooges);

	auto it = Stooges.find(Person{"Larry", 18});
	if(it!= Stooges.end()){
		Stooges.erase(it);
		display(Stooges);
	}

	it = Stooges.find(Person{"xxx", 32});
		if(it!= Stooges.end()){
			Stooges.erase(it);
			display(Stooges);
	}


}

void test3(){
	set<string> s {"A", "B", "C"};
	display(s);

	auto result = s.insert("D");
	display(s);
	cout << boolalpha;
	cout << "First: " << *(result.first) << endl;
	cout << "Second: " << (result.second) << endl;

	result = s.insert("A");

	display(s);
	cout << "First: " << *(result.first) << endl;
	cout << "Second: " << result.second << endl;
}




