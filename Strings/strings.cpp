#include <string>
#include <iostream>

using namespace std;

int main(){
    string s1; //EMPTY
    string s2 = "Frank";
    string s3 = s2, s4 {s3, 0 , 2}, s5 (3, 'x'), s6 = s2 + " " + s5;
    cout << s2 <<endl << s3 << endl << s4 << endl << s5 << endl << s6 << endl;


    //Comparing
    string str1 = "Banana", str2 = "Manzana", str3 = "Pera", str4 = "manzana";
    cout << boolalpha << endl; // boolalpha muestra los booleans como true or false, para quitar esto se usa noboolalpha
    cout << (str2 == str4) << endl << (str2 != str3) << endl << (str2 > str4) << endl << (str3 <= str4) << endl;  
    
    //Find
    string phrase = "Este es un string a ser buscado", word;
    cout << "Enter a word to look if it is inside the string" << endl;\
    getline(cin, word);
    size_t pos = phrase.find(word);
    if(pos != string::npos)
        cout << "Found \"" + word + "\" word at position : " << pos << endl;
    else cout << "\" "<< word << "\" wasn't found" << endl;

    return 0;
}