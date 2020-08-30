/*
 * Player.hpp
 *
 *  Created on: 19 dic. 2019
 *      Author: webins
 */
#include <string>
#include <iostream>
#ifndef PLAYER_HPP_
#define PLAYER_HPP_

class Player{
private:
	int level=1;
	int health=150;
	long double exp=0;
	std::string name;
	std::string voc ="none";
public:
	//constructor overloaded
Player();
Player(std::string);
Player(std::string, int);
Player(std::string,int,long double);
Player(std::string,int,long double,int,std::string);

//destructor
~Player();


//methods
void talk(std::string);
std::string getVoc(void);
std::string getName(void);
long double getExp(void);
int getLevel(void);
int getHealth(void);


};



#endif /* PLAYER_HPP_ */
