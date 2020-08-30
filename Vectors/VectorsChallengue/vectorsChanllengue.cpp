#include <iostream>
#include <vector>
#include <unistd.h>
using namespace std;

int main(){
    vector <int> vector1;
    vector <int> vector2;
    vector <vector <int> > vector2D; 
    system("clear");
    vector1.push_back(10);
    vector1.push_back(20);
    printf("Vector 1: \n");
    cout << "Pos 0: " << vector1.at(0) << '\n' << "Pos 1: " << vector1.at(1) << endl;
    printf("Size of vector 1 is: %d\n", vector1.size());

    printf("********************************************\n");
    vector2.push_back(100);
    vector2.push_back(200);
    printf("Vector 2: \n");
    cout << "Pos 0: " << vector2.at(0) << '\n' << "Pos 1: " << vector2.at(1) << endl;
    printf("Size of vector 2 is: %d\n", vector2.size());

    printf("********************************************\n");
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);
    for(int i=0; i < vector1.size(); i++){
       for(int j=0; j < vector1.size(); j++){
           printf("Vector %d in position %d is : %d \n", i+1, j, vector2D.at(i).at(j)); 
        }
    }

    printf("********************************************\n");
    vector1.at(0) = 1000;
    printf("Printing again vector2D\n");
    for(int i=0; i < vector1.size(); i++){
       for(int j=0; j < vector1.size(); j++){
           printf("Vector %d in position %d is : %d \n", i+1, j, vector2D.at(i).at(j)); 
        }
    }

    printf("********************************************\n");
    printf("Printing vector 1 Again \n");
    cout << "Pos 0: " << vector1.at(0) << '\n' << "Pos 1: " << vector1.at(1) << endl;

    return 0;
}