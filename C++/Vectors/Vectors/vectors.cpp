#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> days {1,2,3,4};
    for(int i =0; days[i]!='\0'; i++){
        printf("%d. %d\n", i, days[i]);
    }
    printf("\n");
    for(int i =0; i < 10; i++){
        days.push_back(i);
    }
    for(int i = 0 ; i  < days.size(); i++){
        cout<< i << ". " << days.at(i) <<endl;
    }
    return 0;
}