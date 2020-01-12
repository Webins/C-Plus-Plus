#include <iostream>

using namespace std;



int * applyAll(const int *, const int *, int ,int);
void printPtr(const int  *const);


int main(){
    int array2[] = {10,20,30};
    int array1[] = {1,2,3,4,5};
    int * ptr = nullptr;
    ptr = applyAll(array1, array2,sizeof(array1) / sizeof(*array1), sizeof(array2) / sizeof(*array2));
    printPtr(ptr);
    delete [] ptr;
    return 0;
}

void printPtr(const int * const ptr){
   for(int i = 0; *(ptr + i) != '\0'; i++)
        cout << *(ptr + i) << endl;
}

int * applyAll(const int * arr1, const int * arr2, int size1, int size2){
    int * result = nullptr, k =0;
    result = new int[size1*size2];
    for(int i =0; i < size2; i++){
        for(int j = 0; j < size1; j++){
            *(result + k) = *(arr2+i) * (*arr1 +j);
            k++;
        }
    }
    return result;
}

