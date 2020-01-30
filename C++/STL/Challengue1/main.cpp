#include <iostream>
#include <cctype>
#include <deque>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

bool is_palindrome(const string &);

int main(){
	array<string,14> strings_tests{"a", "aa", "Ortopedico", "aba", "ana", "avid diva", "Amore", "roma", "A Toyota's a Toyota", "A santa at Nasa", "C++",
	"a man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-panama", "This is a palindrome", "Palindrome"};

	cout << boolalpha;
	for(const auto &s: strings_tests)
		cout << "String: " << s << " Palindrome: " << is_palindrome(s) << endl;

 	return 0;
}


bool is_palindrome(const string &s){
	deque<char> d;
	string s1, s2;
	for(auto element: s){
		if(isalpha(element))
			d.push_back(toupper(element));
	}
	while( d.size() >1){
		if(d.front() != d.back()) return false;
		d.pop_back();
		d.pop_front();
	}
	return true;
}
