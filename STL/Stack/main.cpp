#include <stack>
#include <iostream>
#include <vector>
#include <list>
#include <iomanip>


using namespace std;


template<typename T>
void display(stack<T> s){
	cout << "========================" << endl;
	while(!s.empty()){
		cout << "[ " << s.top() << "]" << endl;
		s.pop();
	}
}

int main(){
	stack<int> s;
	stack <int, vector<int> > s1;
	stack<int, list<int>> s2;
	stack <int, deque<int> > s3;

	for(int i : {1,2,3,4,5})
		s.push(i);
	display(s);

	s.push(100);
	display(s);

	s.pop();
	s.pop();
	display(s);

	while(!s.empty())
		s.pop();
	display(s);

	cout << "Size: " << s.size() << endl;

	s.push(10);
	display(s);

	s.top() = 100;
	display(s);




 	return 0;
}
