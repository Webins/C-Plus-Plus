#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

template<typename T1, typename T2>
void display(const map<T1, T2> &m){
	cout << "[";
	for(const auto &element: m){
		cout << element.first << ": " << element.second << ", ";
	}
	cout <<"]" << endl;
}

void display(const map<std::string, set<int>> &m){
	cout << "============================================" << endl;
	for(const auto &element : m){
		cout << element.first << ": [";
		for(const auto &sub_element: element.second)
			cout << sub_element << " ";
		cout << "]" << endl;
	}
}

void test1(){
	map<string, int> m {
		{"Larry", 18},
		{"Moe", 40},
		{"Carlos", 52}
	};
	display(m);

	m.insert(pair<string, int>("Saul", 25));
	display(m);
	m.insert(make_pair("Romero", 42));
	display(m);

	m["Frank"] = 28;
	display(m);
	m["Frank"] += 5;
	display(m);

	m.erase("Frank");
	display(m);

	cout << "Count Carlos: " << m.count("Carlos") << endl;

	auto it = m.find("Saul");
	if(it != m.end())
		cout << "Found: " << it->first << " " << it->second << endl;
	else cout << "Not found" << endl;

	m.clear();
	display(m);
}

void test2(){
	map<string, set<int>> grades {
		{"Juan", {100,94,88}},
		{"Kevin", {90,95,78}},
		{"Alexa", {98,0,88}}
	};
	display(grades);

	grades["Alexa"].insert(100);

	display(grades);

	auto it = grades.find("Kevin");
	if(it!=grades.end()){
		it->second.erase(90);
		it->second.insert(99);
	}
	display(grades);
}


int main(){
	//test1();
	test2();
}
