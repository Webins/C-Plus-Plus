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


//Delegating constructors
	Player(void);
	Player(std::string);
	Player(std::string,std::string);
	Player(std::string,std::string,int,long double,int);


//destructor
	~Player();


//methods
	void talk(std::string s);
	std::string getVoc(void);
	std::string getName(void);
	long double getExp(void);
	int getLevel(void);
	int getHealth(void);

};



#endif /* PLAYER_HPP_ */
