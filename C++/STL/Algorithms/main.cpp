#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <cctype>

using namespace std;

class Person{
	string name;
	int age;
public:
	Person(void) = default;
	Person(string nameVal, int ageVal)
		:name(nameVal), age(ageVal){}
	bool operator<(const Person &rhs) const{
		return this->age < rhs.age;
	}
	bool operator ==(const Person &rhs) const{
		return (this->age == rhs.age && this -> name == rhs.name);
	}
	string getName(void){
		return name;
	}
	int getAge(void){
		return age;
	}
};

void find_test(){
	vector<int> vec {5,2,3,4};
	auto location = find(vec.begin(), vec.end(), 5 ); //could also wirte as begin(vec)
	if(location != vec.end())
		cout << "Found the number: " << *location << endl;
	else
		cout << "Couldn't find the number" << endl;
	list<Person> list {
		{"Moe", 22},
		{"Larry", 50},
		{"Carl", 25}
	};

	auto loc = find(list.begin(), list.end(), Person{"Moe", 22});
	if(loc!=list.end())
		cout << "Found the Person: " << (*loc).getName() << endl;
	else
		cout << "Couldn't find the Person" << endl;
}

void count_test(){
	vector<int> vec {7,8,9,45,11,1,2,3,4,5,6,79,9,9,5};
	int num = count(vec.begin(), vec.end(), 9);
	cout << "Ocurreces of 9 found in the vector: " << num << endl;
}

void if_count_test(){
	//only count if a condition is true
	vector<int> vec {7,8,9,45,11,1,2,3,4,5,6,79,9,9,5};
	int num = count_if(vec.begin(), vec.end(), [] (int x) {
		return (x % 2 == 0);
	});
	cout << "There is a total of " << num << " even numbers" << endl;
	num = count_if(vec.begin(), vec.end(), [] (int x) {
			return (x % 2 != 0);
		});

	cout << "There is a total of " << num << " odd numbers" << endl;
}

void replace_test(){
	vector <int> vec {1,2,3,4,5};
	for(auto &i: vec)
		cout << i << " ";
	cout << endl;

	replace(vec.begin(), vec.end(), 1, 100);
	for(auto &i: vec)
		cout << i << " ";
	cout << endl;
}



void all_of_test(){
	//there is an any_of algorithm too
	vector<int> vec {7,8,9,45,11,5,5,7,5,5,6,79,9,9,5};
	if(all_of(vec.begin(), vec.end(), [] (int x) {
		return (x >= 5);
	}))
		cout << "All the elements are greater or equal than 5" << endl;
	else
		cout << "Not all the elements are greater or equal than 5" << endl;

	if(all_of(vec.begin(), vec.end(), [] (int x) {
		return (x >= 10);
	}))
		cout << "All the elements are greater or equal than 10" << endl;
	else
		cout << "Not all the elements are greater or equal than 10" << endl;
}

void string_transform_test(){
	string str1 {"This is a test"};
	cout << str1 << endl;
	transform(str1.begin(), str1.end(), str1.begin(), ::toupper);  //This :: without any on the lhs, means a global scope
	cout << "after transform: " << str1 << endl;
}
int main(){
	find_test();
	count_test();
	if_count_test();
	replace_test();
	all_of_test();
	string_transform_test();
	return 0;
}
