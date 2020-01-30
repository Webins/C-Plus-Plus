#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <sstream>
#include <iomanip>
#include <fstream>

using namespace std;

void displayMap(const map<string, int> &m){
	cout << setw(15) << left << "Word" << setw(10) << left << "Count" << endl;
	for(const auto &element: m)
		cout << setw(15) << left << element.first << setw(10) << left << element.second << endl;
}

void displayMap(const map<string, set<int>> &m){
	cout << setw(15) << left << "Word" << setw(25) << left << "Line location" << endl;
	for(const auto &element: m){
		cout << setw(15) << left << element.first;
		for(const auto &sub_element: element.second)
			cout << sub_element << " ";
		cout << endl;
	}
}
void firstPart(void);
void secondPart(void);
void clean_string(string &s){
	string result;
	for(const auto &c: s){
		if(c =='.' || c== ',' || c ==';') continue;
		else result+=c;
	}
	s = result;
}
int main(){
	firstPart();
	//secondPart();

return 0;
}

void firstPart(void){
	fstream file;
	file.open("text_file.txt");
	if(!file){
		cerr << "Couldn't open the file" << endl;
		exit(-1);
	}
	map<string, int> m;
	string w;
	int count =1;
	while(file >> w){
		clean_string(w);
		auto it = m.find(w);
		if(it!= m.end()){
			m.at(w) +=1;
		}else
		m.insert(make_pair(w, count));
	}
	displayMap(m);
	file.close();
}


void secondPart(void){
	fstream file;
	file.open("text_file.txt");
	if(!file){
		cerr << "Couldn't open the file" << endl;
		exit(-1);
	}
	map<string, set<int>> m;
	string l, w;
	int lines;

	while(getline(file, l)){
		stringstream ss {l};
		lines++;
		while(ss >> w){
			clean_string(w);
			m[w].insert(lines);
		}
	}

	displayMap(m);
	file.close();

}
