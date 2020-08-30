#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

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
	bool operator<(const Person &rhs){
		return (this->age < rhs.age);
	}

};

ostream &operator<<(ostream &os, const Person &obj){
	return (os << obj.name << ":" << obj.age);
}


template<typename T>
void display(vector<T> & vec){
	cout << "[";
	for(const auto &element: vec){
		cout << element << " ";
	}
	cout <<"]" << endl;
}

void test1(){
	vector<int> vec {1,2,3,4,5};
	display(vec);
	vec = {2,4,5,6};
	display(vec);
	vector<int> vec2 (10,100);
	display(vec2);
}
void test2(){
	vector<int> vec {1,2,3,4,5};
	display(vec);
	cout << "Size: "<< vec.size() << endl;
	cout << "Capacity: " <<vec.capacity() << endl;
	cout << "Max Size: " << vec.max_size() << endl;

	vec.push_back(6);
	display(vec);
	cout << "Size: "<< vec.size() << endl;
	cout << "Capacity: " <<vec.capacity() << endl;
	cout << "Max Size: " << vec.max_size() << endl;

	vec.shrink_to_fit();
	display(vec);
	cout << "Size: "<< vec.size() << endl;
	cout << "Capacity: " <<vec.capacity() << endl;
	cout << "Max Size: " << vec.max_size() << endl;

	vec.reserve(100);
	display(vec);
	cout << "Size: "<< vec.size() << endl;
	cout << "Capacity: " <<vec.capacity() << endl;
	cout << "Max Size: " << vec.max_size() << endl;
}
void test3(){
	vector<int> vec {1,2,3,4,5};
	display(vec);
	vec[0] =100;
	vec.at(1) = 200;
	display(vec);
}
void test4(){
	vector <Person> stooges;
	stooges.push_back(Person{"Larry", 25});
	display(stooges);
	stooges.push_back(Person{"Patricio", 28});
	display(stooges);
	stooges.push_back(Person{"Gary", 30});
	display(stooges);
	stooges.emplace_back("Ash", 32);
	display(stooges);
}
void test5(){
	vector<Person> stooges{
		{"Larry", 25},
		{"Patricio", 28},
		{"Gary", 30}
	};
	display(stooges);

	cout << "Front: " << stooges.front() << endl;
	cout << "Back: " << stooges.back() << endl;

	stooges.pop_back();
	display(stooges);

}
void test6(){
	vector<int> vec {1,2,3,4,5};
	display(vec);

	vec.clear();
	display(vec);

	vec ={1,2,3,4,5,6,7,8,9,10};
	display(vec);
	vec.erase(vec.begin(), vec.begin() +2);
	display(vec);

	vec ={1,2,3,4,5,6,7,8,9,10};
	auto it = vec.begin();
	while(it!= vec.end()){
		if(*it %2 == 0)
			vec.erase(it);
		else
			it++;
	}
	display(vec);
}
void test7(){
	vector<int> vec1 {1,2,3,4,5};
	vector <int> vec2 {10,20 ,30,40};
	display(vec1);
	display(vec2);

	vec1.swap(vec2);
	display(vec1);
	display(vec2);

}
void test8(){
	vector<int> vec{100,5878,1541,9878,1844126,58584,54578,445,12155,775};
	cout << "Original: ";
	display(vec);
	sort(vec.begin(), vec.end());
	cout << "Sorted: ";
	display(vec);
	cout << "Reverse sorted: ";
	sort(vec.rbegin(), vec.rend());
	display(vec);
}
void test9(){
	vector<int> vec1 {10,20,30,40,50};
	vector<int> vec2 {100,200};
	cout <<"Original" << endl;
	display(vec1);
	display(vec2);
	cout << "=========================" << endl;
	cout << "Copy" << endl;
	copy(vec2.begin(), vec2.end(), back_inserter(vec1));
	display(vec1);
	display(vec2);
	cout << "=========================" << endl;

	cout << "Only even" << endl;
	vec1 = {1,2,3,4,5,6,7,8,9,10};
	vec2 ={100,200};
	copy_if(vec1.begin(), vec1.end(), back_inserter(vec2), [](int x){
		return (x %2 ==0);
	});
	display(vec1);
	display(vec2);
	cout << "=========================" << endl;
}
void test10(){
	vector<int> vec1 {1,2,3,4,5};
	vector<int> vec2 {10,20,30,40,50};
	vector<int> vec3;

	transform(vec1.begin(), vec1.end(), vec2.begin(), back_inserter(vec3), [](int x, int y){
		return (x*y);
	});
	display(vec3);
}
void test11(){
	vector<int> vec1 {1,2,3,4,5,6,7,8,9,10};
	vector<int> vec2 {100,200,300,400};
	//insert vec2 into vec 1 before the 5
	display(vec1);
	display(vec2);

	auto it = find(vec1.begin(), vec2.end(), 5);
	if(it!= vec1.end()){
		cout << "Inserting " << endl;
		vec1.insert(it, vec2.begin(), vec2.end());
	}
	else
		cout << "Sorry, couldn't locate the 5" << endl;
	display(vec1);
}
int main(){
	//test1();
	//test2();cout << "Original: ";
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	//test8();
	//test9();
	//test10();
	test11();
	return 0;
}
