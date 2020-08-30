#include <iostream>

using namespace std;

int main(){
    int * arrayptr = nullptr;
    size_t size;
    
    cout << "Enter the size of the array to allocate the memory" << endl;
    cin >> size;
    
    arrayptr = new int[size];

    for(int i=0; i <size; i++){
        *(arrayptr +i) = i;
        cout << "Element number [" << i<< "] is : "<<*arrayptr+i << endl;
    }
    delete [] arrayptr;
    
    return 0;
}