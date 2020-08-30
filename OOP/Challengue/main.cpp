#include <iostream>
#include "Movies.hpp"
#include <cctype>
#include <unistd.h>
using namespace std;

#define FAILURE -1
#define SUCCESS 1
void deleteNL(char []);
int validateInt(char []);
int validateRangeInt(char [], const int , const int );

void enterMovie(void);
void deleteMovie(void);
void findMovie(void);
void showMenu(void);
void display(Movie);
	Movies collections;
int main(){
	int n=0;
	char str[3];
	while(n!=4){
		n=0;
		askN:
		showMenu();
		fgets(str, 3, stdin);
		if(validateRangeInt(str, 1, 4) == FAILURE){
			cout << "Enter a valid number" << endl;
			goto askN;
		}else n = atoi(str);
		switch(n){
		case 1: enterMovie();
		break;

		case 2: deleteMovie();
		break;

		case 3: findMovie();
		break;

		case 4:
			cout << "exit" << endl;
		break;
			}
		}
	return 0;
}

void enterMovie(void){
	string name, rating, category;
	int like,c;
	cout << "Enter the name: ";
	getline(cin, name);
	cout << "Enter the rating: ";
	getline(cin, rating);
	cout << "Enter the genre: ";
	getline(cin, category);
	cout << "Rate this movie between 1-10: ";
	cin >> like;
	if((c= getchar()) =='\n') c+=c;
	Movie Mov(name, rating, category, like);
	cout << "Movie entered: \n";
	display(Mov);
	collections.addMovie(Mov);
	cout << "Press a key to continue" << endl;
	getchar();
}

void deleteMovie(void){
	string name;
	Movie *m = new Movie;
	cout <<"Enter the name of the movie to erase: ";
	getline(cin, name);
	if((m = collections.findMovie(name)) != nullptr){
		cout << "Movie deleted: \n";
		display(*m);
		collections.deleteMovie(name);
	}
	m = nullptr;
	delete m;
}

void findMovie(void){
	string name;
	Movie *m = new Movie;
	cout <<"Enter the name of the movie to look for: ";
	getline(cin, name);
	if((m = collections.findMovie(name)) != nullptr){
		cout << "The movie is on the system: \n";
		display(*m);
	}
	m = nullptr;
	delete m;
}
void display(Movie m){
	cout << "Movie name: " << m.getName() << endl;
	cout << "Rating: " << m.getRating() <<endl;
	cout << "Genre: " << m.getGenre()<<endl;
	cout << "Like: " << m.getLike() <<endl;
	cout << "Id: " << m.getId() << endl;
	cout << endl;
}

void showMenu(void){
	cout << "Press (1) - To enter a movie" << endl;
	cout << "Press (2) - To delete a movie" << endl;
	cout << "Press (3) - To find a movie" << endl;
	cout << "Press (4) - To exit" << endl;
}




int validateInt(char s[]){
    unsigned short int i, j;
    deleteNL(s);
    while(s[0] != '\0'){ //MIENTRAS NO SEA UN STRING VACIO
        if(s[0] =='-' && isdigit(s[1])){ //EVALUA LOS MENORES A 0
            if(s[1] == '0') return FAILURE;
            for(i =0, j=1; s[i] !='\0'; i++, j++){
                if(!isdigit(s[j]) && s[j] !='\0') return FAILURE;
                else if(isdigit(s[j]) && s[j] !='\0') continue;
                else if(s[j] =='\0' && isdigit(s[i])) return SUCCESS;
            }
        }
        else{ //EVALUA LOS MAYORES E IGUALES A 0
            if(s[0] == '0' && s[1] == '\0') return SUCCESS;
            else if(s[0] =='0' && isdigit(s[1])) return FAILURE;
            for(i = 0, j=1; s[i] != '\0'; i++, j++){
                if(!isdigit(s[i]) || isalpha(s[i])) return FAILURE;
                else if(s[j] =='\0' && isdigit(s[i])) return SUCCESS;
            }
        }
    }
    return FAILURE;
}
int validateRangeInt(char s[], const int min, const int max){
    int n;
    if(validateInt(s) == SUCCESS){
        n = atoi(s);
        if(n >= min && n <= max) return SUCCESS;
        else return FAILURE;
    }
    else return FAILURE;
}

void deleteNL(char s[]){
    unsigned short int i;
    for(i =0; s[i] != '\0'; i++){
        if(s[i] =='\n') s[i] = '\0';
    }
}



