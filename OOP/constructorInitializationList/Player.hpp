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


//constructor Initialization lists
	Player(void);
	Player(std::string);
	Player(std::string,std::string);
	Player(std::string ,std::string, int , long double , int);


//destructor
	~Player();


//methods
	void talk(std::string s) const;
	std::string getVoc(void) const;
	std::string getName(void) const;
	long double getExp(void) const;
	int getLevel(void) const;
	int getHealth(void) const;

};



#endif /* PLAYER_HPP_ */
