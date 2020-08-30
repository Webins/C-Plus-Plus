#include <iostream>
#include <vector>
#include <unistd.h>
#include <algorithm>
#define MAX_LENGHT 10

using namespace std;

void check_largest(vector <int> &);
void check_smallest(vector <int> &);
void add_number(vector <int> &);
void menu(void);
void printList(vector <int> &);
size_t char_input(char &);

inline size_t empty_check(vector <int> &lists){
    if(lists.empty()) {
        cout<< "The list is empty []\n";
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

int main(){
    menu();
    return 0;
}

void printList(vector <int> &v){ 
    cout << "The list has [";
    for(int i =0; i < v.size();i++){
        if(i ==0) cout << v.at(i);
        else cout << "," << v.at(i);
    }
    cout << "]\n";
}

void menu(){
    vector <int> lists;
    char dec;
    menu:
    cout <<"P - print list\nA - add number\nS- get the smallest number\nL- get the biguest number\nQ - quit" << endl;
    if(char_input(dec) == EXIT_FAILURE) goto menu;
    switch (dec){
    case 'p' : 
        if(empty_check(lists) == EXIT_SUCCESS);
        else printList(lists);
        goto menu;
    break;

    case 'a' :
       add_number(lists);
       goto menu;
    break;

    case 's' :
        check_smallest(lists);
        goto menu;
    break;

    case 'l' :
        check_largest(lists);
        goto menu;
    break;

    case 'q' :
        return;
    }
}

size_t char_input(char &dec){
    int choice;
    while((choice =getchar()) != '\n' && choice != EOF) dec = tolower((char)choice);
    if(dec != 'p' && dec != 'a' && dec != 's' && dec != 'l' && dec != 'q'){
        cout << "Enter a valid choice\n";
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

void add_number(vector <int> &v){
    string num_input;
    int number;
    askNumber:
        cout << "Enter an integer number to the list\n";
        getline(cin, num_input);
        if((number = atoi(num_input.c_str())) == 0){
            system("clear");
            cout << "Enter a valid number\n";
            goto askNumber;
        }
        else{
            v.push_back(number);
            printList(v);
        }
}


void check_smallest(vector <int> &v){
        if(empty_check(v) == EXIT_SUCCESS) return;
        cout << "The smallest number of the list is : ";
        int min = v.at(0);
        for(int i =1; i< v.size(); i++){
            if(v.at(i) < min) {
                min = v.at(i);
            }
        }
        cout << min << endl;
}


void check_largest(vector <int> &v){
    if(empty_check(v) == EXIT_SUCCESS) return;
    cout << "The largest number of the list is : ";
        int max = v.at(0);
        for(int i =1; i< v.size(); i++){
            if(v.at(i) > max) {
                max = v.at(i);
            }
        }
        cout << max << endl;
}
        