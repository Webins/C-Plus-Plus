#include <iostream>
#include <vector>
#include <unistd.h>
#include <algorithm>
#define MAX_LENGHT 10

using namespace std;

vector <int> lists;
void printList(void);
int main(){
    int choice, numb;
    char dec; 
    char num[MAX_LENGHT];
    menu:
    cout << "Enter a choice to do a operation\n";
    cout << "P- print a number\nA- add a number\nS- display the smallest number\nL - display the largest number\nQ - quit\n";
    while((choice =getchar()) != '\n' && choice != EOF) dec = tolower((char)choice);
    if(dec != 'p' && dec != 'a' && dec != 's' && dec != 'l' && dec != 'q'){
        cout << "Enter a valid choice\n";
        goto menu;
    }
    system("clear");
    switch (dec){
    case 'p' : {
        if(lists.empty()) cout<< "The list is empty []\n";
        else printList();
        goto menu;
    }
    case 'a' :{
        askNumber:
        cout << "Enter an integer number to the list\n";
        fgets(num, MAX_LENGHT, stdin);
        if((numb = atoi(num)) == 0){\
            system("clear");
            cout << "Enter a valid number\n";
            goto askNumber;
        }
        else{
            lists.push_back(numb);
            printList();
        }
    }
    goto menu;
    case 's' :{
        if(lists.empty()) {
            cout << "The list is empty\n";
            goto menu;
        }
        cout << "The smallest number of the list is : ";
        int min = lists.at(0);
        for(int i =1; i< lists.size(); i++){
            if(lists.at(i) < min) {
                min = lists.at(i);
            }
        }
        cout << min << endl;
    }
    goto menu;
    case 'l' :{
        if(lists.empty()) {
            cout << "The list is empty\n";
            goto menu;
        }
        cout << "The largest number of the list is : ";
        int max = lists.at(0);
        for(int i =1; i< lists.size(); i++){
            if(lists.at(i) > max) {
                max = lists.at(i);
            }
        }
        cout << max << endl;
    }
    goto menu;
    case 'q' :
        return 0;
    }
    return 0;
}

void printList(void){ 
    cout << "The list has [";
    for(int i =0; i < lists.size();i++){
        if(i ==0) cout << lists.at(i);
        else cout << "," << lists.at(i);
    }
    cout << "]\n";
}