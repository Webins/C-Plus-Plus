//Substitution cipher
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main(){
    int shift, i =0,j=0, rnumber;
    string encryptedText;
    vector <int> pos;
    srand(time(0));
    cout << "Enter a text to be encrypted" << endl;
    getline(cin, encryptedText);
    cout << "Enter the shift of your cipher" << endl;
    cin >> shift;
    for(int keyword: encryptedText) {
        if(keyword == ' ') {
            rnumber = rand() % 21;
            pos.push_back(i);
            encryptedText.at(i) = keyword + rnumber; 
        }else encryptedText.at(i) = keyword + shift;
        i++;
    }
    cout << "Your cipher text is : " + encryptedText << endl;
    i=0, j=0; 
    for(int keyword: encryptedText){
        if(i == pos[j]){
            encryptedText.at(i) = 32;
            j++;
        }
        else encryptedText.at(i) = keyword - shift;
        i++;
    }
    cout << "Your text deciphered is : " + encryptedText << endl;

    return 0;
}