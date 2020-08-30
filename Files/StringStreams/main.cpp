#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
#include <string>

using namespace std;
void display(string name, int num, double total);
int main(){
	int num;
	double total;
	string name;

	string info = "Moe 100 1255.54";

	istringstream iss {info};

	iss >> name >> num >> total;
	cout << setw(10) << left << "Name:";
	cout << setw(5) << left << "Num:";
	cout << setw(5) << left << "Total:" << endl;
	display(name, num, total);

	/*DATA VALIDATION*/
	int value{};
	string entry{};
	bool done {false};
	do{
		cout << "Enter a integer value: " << endl;
		getline(cin, entry);
		istringstream validator {entry};
		if(validator >> value && (validator.eof())) done = true;
		else cout << "Only integer values are possible, try again" << endl;

		//discard input buffer
//		cin.ignore(numeric_limits<streamsize>::max(),'\n'); //ignore the rest of the input if the first part is valid, example 12.18, will take 12 as valid

	}while(!done);

	cout << "The integer is: " << value << endl;

	return 0;
}

void display(string name, int num, double total){
	ostringstream oss{};
	oss << setw(10) << left << name << setw(5)  << num << setw(5)  << total << endl;
	cout << oss.str() << endl;
}
