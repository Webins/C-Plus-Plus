#include <stdio.h>

void myFunc(int &number);

int main(){
    int number = 5;
    myFunc(number);

    printf("%d", number);
    return 0;
}

void myFunc(int &number){
    printf("%d", number);
    number = 10;
}