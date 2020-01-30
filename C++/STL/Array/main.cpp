#include <iostream>
#include <string>
#include <array>
#include <numeric>
#include <algorithm>
using namespace std;

void display(const array<int, 5> &arr){
	cout << "[";
	for(const auto &a: arr)
		cout << a << ", ";
	cout << "]" << endl;
}
void test1(){
	array<int, 5> arr1 {1,2,3,4,5};
	array<int, 5> arr2;
	display(arr1);
	display(arr2); //garbage, its not initialized

	arr2 ={10,20,30,40,50};
	display(arr1);
	display(arr2);

	cout << "Size arr1: " << arr1.size() << endl;
	cout << "Size arr2: " << arr2.size() << endl;

	arr1[0] = 1000;
	arr1.at(1) = 2000;
	display(arr1);

	cout << "Front of arr2: " << arr2.front() << endl;
	cout << "Back of arr2: " << arr2.front() << endl;
}
void test2(){
	array<int, 5> arr1 {1,2,3,4,5};
	array<int, 5> arr2 {10,20,30,40,50};
	display(arr1);
	display(arr2);
	arr1.fill(0);

	arr1.swap(arr2);

	display(arr1);
	display(arr2);
}
void test3(){
	array<int, 5> arr {1,2,3,4,5};
	int *ptr = arr.data();
	cout << ptr << endl;
	*ptr = 1000;
	display(arr);
}

void test4(){
	array<int, 5> arr {7487,484,1547,1234,15477};
	display(arr);
	sort(arr.begin(), arr.end());
	display(arr);


}
void test5(){
	array<int, 5> arr {7487,484,1547,1234,15477};
	display(arr);
	auto min_num = min_element(arr.begin(), arr.end());
	auto max_num = max_element(arr.begin(), arr.end());

	cout << "The min element is: " << *min_num << endl;
	cout << "The max element is: " << *max_num << endl;
}
void test6(){
	array<int, 5> arr {7487,484,1547,1547,15477};
	auto adjacent = adjacent_find(arr.begin(), arr.end());
	if(adjacent != arr.end())
		cout << "The adjacent number is: " << *adjacent << endl;
	else
		cout << "There are not adjacent values" << endl;

}
void test7(){
	array<int, 5> arr {7487,484,1547,1547,15477};
	//accumulate is from <numeric>
	int sum = accumulate(arr.begin(), arr.end(), 0);
	cout << "The sum of the elements is: " << sum << endl;
}
void test8(){
	array<int, 10> arr{1,2,3,3,3,4,3,4,7,1};
	int counter = count(arr.begin(), arr.end(), 3);
	cout << "Threes found: " << counter << endl;
}
void test9(){
	array<int, 10> arr{1,2,3,50,60,70,80,200,300,400};
	//how many numbers are between 10 and 200
	int counter = count_if(arr.begin(), arr.end(), [] (int x){
		return (x >10 && x <200);
	});

	cout << "The numbers between 10 and 200 are: " << counter << endl;
}

int main(){
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	//test8();
	test9();
	return 0;
}
