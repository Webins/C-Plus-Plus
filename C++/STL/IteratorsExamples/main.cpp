#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
#include <set>

using namespace std;

void display(const vector<int> &);
void test1(void);
void test2(void);
void test3(void);
void test4(void);
int main(){
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}


void display(const vector<int> &v){
	for(auto const &element: v)
		cout << element << endl;
}
void test1(void){
	vector<int> nums {1,2,3,4,5};
	auto it = nums.begin();
	cout << *it << endl; // point to 1

	it++;

	cout << *it << endl; // point to 2

	it+= 2;

	cout << *it << endl; // point to 4

	it--;

	cout << *it << endl; // point to 3

	it = nums.end() -1; // point to 5;

	cout << *it << endl;
}
void test2(void){
	vector<int> nums {1,2,3,4,5};
	vector<int>::iterator it = nums.begin();
	while(it != nums.end()){
		cout << *it << endl;
		it++;
	}
	it = nums.begin();
	while(it != nums.end()){
		*it =0;
		it++;
	}
	display(nums);
}
void test3(void){
	vector<int> nums {1,2,3,4,5};
	//using a const iterator
	//vector<int>::const_iterator it = nums.begin();
	auto it = nums.cbegin();
	while(it != nums.end()){
		cout << *it << endl;
		it++;
	}
	//cant change the object that the iterator is pointint to
	//*it = 0; no valid
}
void test4(void){
	vector<int> vec {1,2,3,4};
	//reverse iterator
	auto it {vec.rbegin()};
	while(it != vec.rend()){
		cout << *it << endl;
		it++;
	}

	//const reverese iterator over a list
	list<string> names{"Larry", "Moe", "Curly"};
	auto it2 = names.crbegin();
	while(it2 != names.crend()){
		cout << *it2 << endl;
		it2++;
	}

	//iterator over a map
	map<string, string> favorites{
		{"Frank", "C++"},
		{"Bill", "Java"},
		{"Toms", "Python"}
	};
	auto it3 = favorites.cbegin();
	while(it3 != favorites.cend()){
		cout << it3->first << "-" << it3->second << endl;
		it3++;
	}


}
