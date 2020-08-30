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
//Members
	std::string name;
	std::string voc;
	int health;
	long double exp;
	int level;
public:


//Default constructor
	Player(std::string="None",std::string="None",int=150,long double=0,int=1);


//destructor
	~Player();

//Copy constructors
	Player(const Player &);

//methods
	void talk(std::string s);
	std::string getVoc(void);
	std::string getName(void);
	long double getExp(void);
	int getLevel(void);
	int getHealth(void);

};



#endif /* PLAYER_HPP_ */
