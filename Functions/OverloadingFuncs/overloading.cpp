#include <iostream>

using namespace std;

int add_num(int, int);
double add_num(double, double);

int main(){
    cout << add_num(1,2) << endl;
    cout << add_num(2.5, 5.766) << endl;
    /* cout << add_num(1, 3.6) << endl; compiling error */

    return 0;
}

int add_num(int n1, int n2){
    return n1+n2;
}

double add_num(double n1, double n2){
    return n1+n2;
}