#include <iostream>
using namespace std;
void printArr(int []);


int main(){
    int arr[] = {5,7,8,9,10,5};
    printArr(arr);
    return 0;
}

void printArr(int arr[]){
    for(int i =0; arr[i] !='\0' ; i++){
        cout << arr[i] << endl;
    }
    
}