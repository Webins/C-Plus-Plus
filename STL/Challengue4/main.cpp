#include <iostream>
#include <cctype>
#include <queue>
#include <array>
#include <stack>
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
	queue<char> q;
	stack<char> stk;
	string s1, s2;
	for(auto element: s){
		if(isalpha(element)){
			q.push(toupper(element));
			stk.push(toupper(element));
		}
	}
	while(!q.empty() || !stk.empty()){
		if(q.front() != stk.top()) return false;
		q.pop();
		stk.pop();
	}
	return true;
}
