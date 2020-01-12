#include <iostream>
#include "Player.hpp"
using namespace std;

void displayPlayer(Player);

int main(){
	Player Seromontis("Seromontis", "Knight", 4500, 75044.4545 , 550);
	displayPlayer(Seromontis);
	Seromontis.talk("I'm The King");

	Player Rookie("Rookie");
	displayPlayer(Rookie);
	Rookie.talk("I'm Rookie in rookgard");

	Player Cachero("Cachero", "Sorcerer");
	displayPlayer(Cachero);
	Cachero.talk("I'm Cachero i was banned");

	//A copy of Cachero
	Player Cacherito = Cachero;
	displayPlayer(Cacherito);
	return 0;
}

void displayPlayer(Player p){
	cout << "Name: " << p.getName()<< endl;
	cout << "Exp: " << p.getExp() << endl;
	cout << "Health: " << p.getHealth() << endl;
	cout << "Level: " << p.getLevel() << endl;
	cout << "Vocation: " << p.getVoc() << endl;
	cout << endl;
}
