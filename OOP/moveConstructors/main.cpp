#include <iostream>
#include <vector>
#include "Move.hpp"

using namespace std;

int main(){
	vector<Move> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);
	for(int i =0, j=1; i< 5;i++, j*=5){
		vec.push_back(Move(j));
	}
return 0;
}


