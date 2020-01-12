#include <iostream>

using namespace std;

double cal_cost(double, double = 0.8, double= 3.50);



int main(){

    double cost = cal_cost(100.78);
   /*  cout << fixed; */
   cout << scientific;
    cout << cost << endl;
    return 0;
}

double cal_cost(double base, double tax, double shipping){
    return ((base*tax) +shipping);
}