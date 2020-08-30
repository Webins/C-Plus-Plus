#include <iostream>
#include "Player.hpp"
using namespace std;
void displayPlayer(Player);
int main(){
	Player Seromontis ("Seromontis", "Knight", 4500, 75044.4545 , 550);
	displayPlayer(Seromontis);
	Seromontis.talk("I'm The King");

	cout << endl;

	Player Rookie ("Rookie");
	displayPlayer(Rookie);
	Rookie.talk("I'm Rookie in rookgard");


	Player Webins ("Webins", "Paladin", 1500, 4777.2, 150);
	displayPlayer(Webins);
	Rookie.talk("I'm Webins");

	Player Malvado ("El malvado", "Paladin", 300, 100.2, 15, 3);
	displayPlayer(Malvado);
	Rookie.talk("I'm bad");

	cout << "Active objects: " << Player::getActObjects() << endl;

	return 0;
}


void displayPlayer(Player p){
	cout << "Name: " << p.getName()<< endl;
	cout << "Exp: " << p.getExp() << endl;
	cout << "Health: " << p.getHealth() << endl;
	cout << "Level: " << p.getLevel() << endl;
	cout << "Vocation: " << p.getVoc() << endl;
	cout << "Id: " << p.getId() << endl;
	cout << endl;
}
