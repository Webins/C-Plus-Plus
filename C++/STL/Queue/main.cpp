#include <queue>
#include <iostream>
#include <vector>
#include <list>
#include <iomanip>


using namespace std;


template<typename T>
void display(queue<T> q){
	cout << "========================" << endl;
	cout << "[";
	while(!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}
	cout << "]" << endl;
}

int main(){
	queue<int> q;
	for(int i : {1,2,3,4,5})
		q.push(i);

	display(q);

	cout <<  "Front: " << q.front() << endl;
	cout << "Back: " << q.back() << endl;

	q.push(100);
	display(q);

	q.pop();
	q.pop();
	display(q);

	cout << "Size: " << q.size() << endl;

	while(!q.empty()){
		q.pop();
	}

	cout << "Size: " << q.size() << endl;

	q.push(10);
	q.push(100);
	q.push(1000);
	display(q);

	q.front() = 0;
	q.back() = 100000;

	display(q);
	return 0;
}
