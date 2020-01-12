#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int num = 15;
    int * pnum = &num;

    cout << "The value of num is: " << num << endl;
    cout << "The address of num is: " << &num << endl;
    cout << "The value of pnum is: " << *pnum << endl;
    cout << "The address of pnum is: " << pnum << endl;

    cout << "The address of pnum now is changed to the null ptr" << endl;
    pnum = nullptr;

    cout << "The new value of pnum is : " << pnum << endl;
    cout << "The new address of pnum is: " << &pnum << endl;
    cout << "*******************************************" << endl;

// Las clases string y vector a diferencia de los arreglos de c, al usar un pointer en ellos debes traer su direccion con el operador &
    string myString = "My string";
    string * pmyString = &myString;  
    vector <int> myVector = {5,5,3,4,8,9,10};
    vector <int> *pmyVector = &myVector;

    cout << "The value of myString is: " << myString <<endl;
    cout << "The address of myString is: " << &myString << endl;
    cout << "The value of pmyString is: " << *pmyString <<endl;
    cout << "The address of pmyString is: " << pmyString << endl;
    cout << "The value of myVector at [0] is: " << myVector.at(0) <<endl;
    cout << "The address of myVector is: " << &myVector << endl;
    cout << "The value of pmyvector at [0] is: " << (*pmyVector).at(0) <<endl;
    cout << "The address of pmyVector is: " << pmyVector << endl;
    return 0;
}