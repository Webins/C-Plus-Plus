#include <iostream>

using namespace std;

int * createArray(size_t, int);
int main(){
    int * array = nullptr;

    array = createArray(20, 50);

    for(int i =0; *(array+i) !='\0'; i++){
        cout << *(array+i) << endl;
    }
    
    delete [] array;
    return 0;
}

int * createArray(size_t size, int init_value =0){
    int * ptr = new int[size];
    for(int i=0; i < size; i++){
        *(ptr +i) = init_value;
    }
    return ptr;
}