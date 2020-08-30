#include <iostream>
#include "Player.hpp"
using namespace std;
int main(){
	Player Seromontis ("Seromontis", 4500, 75044.4545 , 550, "Knight");
	cout << "Name: " << Seromontis.getName()<< endl;
	cout << "Exp: " << Seromontis.getExp() << endl;
	cout << "Health: " << Seromontis.getHealth() << endl;
	cout << "Level: " << Seromontis.getLevel() << endl;
	cout << "Vocation: " << Seromontis.getVoc() << endl;
	Seromontis.talk("I'm The King");
	return 0;
}
