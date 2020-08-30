#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
#include <vector>

using namespace std;

template<typename T>
void display(deque<T> & deq){
	cout << "[";
	for(const auto &element: deq){
		cout << element << " ";
	}
	cout <<"]" << endl;
}

void test1(){
	deque<int> d {1,2,3,4,5};
	display(d);
	d = {2,4,6,8,10};
	display(d);

	deque<int> d1 (10,100);
	display(d1);

	d[0] = 110;
	d.at(1) = 220;
	display(d);
}
void test2(){
	deque<int> d {0,0,0};
	display(d);

	d.push_back(10);
	d.push_back(20);
	display(d);
	d.push_front(10);
	d.push_front(20);
	display(d);


	cout << "Front: "<< d.front() << endl;
	cout << "Back: "<< d.back() << endl;
	cout << "Size: "<< d.size() << endl;

	display(d);

	d.pop_back();
	d.pop_front();

	display(d);

}
void test3(){

	vector<int> vec{1,2,3,4,5,6,7,8,9,10};
	deque<int> d;
	auto it = vec.begin();
	while(it!= vec.end()){
		if(*it % 2 == 0) d.push_back(*it);
		else d.push_front(*it);
		it++;
	}
	display(d);
}
void test4(){
	//push front vs back ordering
	vector<int> vec{1,2,3,4,5,6,7,8,9,10};
	deque<int> d;
	for(const auto &element: vec){
		d.push_front(element);
	}
	display(d);
	d.clear();

	for(const auto &element: vec){
		d.push_back(element);
	}

	display(d);

}
void test5(){
	vector<int> vec{1,2,3,4,5,6,7,8,9,10};
	deque<int> d;

	copy(vec.begin(), vec.end(), front_inserter(d));
	display(d);
	d.clear();

	copy(vec.begin(), vec.end(), back_inserter(d));
	display(d);
}
int main(){

	//test1();
	//test2();
	//test3();
	//test4();
	test5();
	return 0;
}
