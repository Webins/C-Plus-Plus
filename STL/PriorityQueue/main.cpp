#include <iostream>
#include <queue>
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
void display(priority_queue<T> pq){
	cout << "[";
	while(!pq.empty()){
		cout << pq.top() << " ";
		pq.pop();
	}
	cout <<"]" << endl;
}

void test1(void);
void test2(void);
int main(){
	test1();
	test2();
	return 0;
}


void test1(void){
	priority_queue<int> pq;

	for(int i :{3,5,7,20,14,11,21,23,45,78})
		pq.push(i);

	display(pq);

	cout << "Size: " << pq.size() << endl;
	cout << "Top: " << pq.top() << endl;

	pq.pop();
	display(pq);
}

void test2(void){
	priority_queue<Person> pq;

	pq.push(Person{"A", 10});
	pq.push(Person{"B", 12});
	pq.push(Person{"C", 32});
	pq.push(Person{"D", 25});
	pq.push(Person{"E", 23});
	pq.push(Person{"F", 54});
	pq.push(Person{"G", 33});
	pq.push(Person{"H", 28});

	display(pq);

}


