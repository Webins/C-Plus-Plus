#include <iostream>
#include <algorithm>
#include <iterator> //std::advance
#include <list>
#include <string>
using namespace std;

class Person{
	friend ostream &operator<<(ostream &, const Person &);
	string name;
	int age;
public:
	Person(void)
	:name("Unknown"), age(0){};
	Person(string nameVal, int ageVal)
		:name(nameVal), age(ageVal){}
	bool operator==(const Person &rhs){
		return (this->name == rhs.name && this->age == rhs.age);
	}
	bool operator<(const Person &rhs){
		return (this->age < rhs.age);
	}

};

ostream &operator<<(ostream &os, const Person &obj){
	return (os << obj.name << ":" << obj.age);
}


template<typename T>
void display(list<T> &l){
	cout << "[";
	for(const auto &element: l){
		cout << element << " ";
	}
	cout <<"]" << endl;
}


void test1(){
	list<int> l {1,2,3,4,5};
	display(l);

	list<string> l2;
	l2.push_front("Front");
	l2.push_back("Back");
	display(l2);

	list<int> l3;
	l3 ={1,2,3,4,5,6,7,8,9,10};
	display(l3);

	list<int> l4(10,100);

	display(l4);
}
void test2(){
	list<int> l {1,2,3,4,5,6,7,8,9,10};
	display(l);

	cout << "Size: " << l.size() << endl;
	cout << "Front: " << l.front() << endl;
	cout << "Back: " << l.back() << endl;

	l.clear();
	display(l);
	cout << "Size: " << l.size() << endl;
}
void test3(){
	list<int> l {1,2,3,4,5,6,7,8,9,10};
	display(l);

	l.resize(5);
	display(l);

	l.resize(10);
	display(l);

	list<Person> lp;
	lp.resize(5);
	display(lp);
}
void test4(){
	list<int> l {1,2,3,4,5,6,7,8,9,10};
	display(l);

	auto it = find(l.begin(), l.end(), 5);
	if(it!= l.end())
		l.insert(it, 100);
	display(l);

	list<int> l2{100,200,300};
	l.insert(it, l2.begin(), l2.end());
	display(l);

	advance(it, -4);
	cout << *it << endl;

	l.erase(it); // iterator become invalid
	display(l);
}
void test5(){
	list<Person> stooges{
		{"Larry",18},
		{"Moe",25},
		{"Jane", 22}
	};
	display(stooges);
	string name;
	int age;
	cout << "Enter the name: ";
	getline(cin, name);
	cout << "Enter the age: ";
	cin >> age;

	stooges.emplace_back(name, age);
	display(stooges);

	auto it= find(stooges.begin(), stooges.end(), Person{"Moe", 25});
	if(it!= stooges.end())
		stooges.emplace(it, "Frank", 52);
	display(stooges);
}
void test6(){
	list<Person> stooges{
		{"Larry",18},
		{"Moe",25},
		{"Jane", 22}
	};
	display(stooges);

	stooges.sort();
	display(stooges);
}



int main(){
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	test6();
	return 0;
}
