#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<double> temps {80,78.5,98.2,38.3};
    double average_temp, sum_temps =0;
    for(auto temp: temps) sum_temps+= temp;
    cout << "The average of temperatures is : " << sum_temps / temps.size() << endl;

    for(auto score : {90,10,11,15,44}) cout << score<< endl;
    return 0;
}