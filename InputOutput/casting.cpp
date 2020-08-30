#include <iostream>

using namespace std;

int main(){
    //Regular_cast
    float f = 3.5;
    int b = static_cast<int>(f);
    cout << "The value of b is " << b << endl;

    //Reinterpretet_cast
    int* p = new int(65); 
    char* ch = reinterpret_cast<char*>(p); 
    printf("%d\n", *p);
    printf("%c\n", *ch);
    printf("%p\n", p);
    printf("%p\n", ch);
    return 0;
}