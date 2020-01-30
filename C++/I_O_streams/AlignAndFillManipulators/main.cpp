#include <iostream>
#include <iomanip>
#include <string>
//setw,left, right, setfill
using namespace std;
void ruler(void){
	cout << "123456789012345678901234567890123456789012345678901234567890123456789" << endl;
}
int main(){
	int num1 = 1234;
	double num2 = 1234.5678;
	string hello = "Hello";

	cout << "********************DEFAULT********************" << endl;
	ruler();
	cout << num1;
	cout << num2;
	cout << hello;

	cout << "\n********************LINEPERLINE********************" << endl;
	ruler();
	cout << num1 << endl;
	cout << num2 << endl;
	cout << hello << endl;

	cout << "\n********************WITHD 10 FOR NUM 1********************" << endl;
	ruler();
	cout << setw(10) << num1;
	cout << num2 ;
	cout << hello << endl;

	cout << "\n********************WITHD 10 FOR NUM 1 AND NUM 2********************" << endl;
	ruler();
	cout << setw(10) << num1;
	cout << setw(10) << num2;
	cout << hello << endl;

	cout << "\n********************WITHD 10 FOR NUM 1, NUM 2 AND NUM 3********************" << endl;
	ruler();
	cout << setw(10) << num1;
	cout << setw(10) << num2;
	cout << setw(10) << hello << endl;

	cout << "\n********************WITHD 10 FOR NUM 1, NUM 2 AND NUM 3 AND LEFT JUSTIFY********************" << endl;
	ruler();
	cout << setw(10) << left << num1;
	cout << setw(10) << left << num2;
	cout << setw(10) << left << hello << endl;

	cout << "\n********************WITHD 10 FOR NUM 1, NUM 2 AND NUM 3, LEFT JUSTIFY AND A SETFILL TO DASH********************" << endl;
	ruler();
	cout << setfill('-');
	cout << setw(10) << left << num1;
	cout << setw(10) << left << num2;
	cout << setw(10) << left << hello << endl;



	cout << endl;
	return 0;
}

