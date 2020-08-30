/*
 * Player.hpp
 *
 *  Created on: 19 dic. 2019
 *      Author: webins
 */
#include <string>
#include <vector>
#include <iostream>
#ifndef PLAYER_HPP_
#define PLAYER_HPP_

class Player{
private:
//Members
	static int actObjects;
	static int classId;
	std::string name;
	std::string voc;
	int health;
	long double exp;
	int level;
	int id;
public:


//Constructor
	Player(std::string = "None",std::string= "None",int=150,long double=0,int=1, int =0);


//destructor
	~Player();

//copy constructor
	Player(const Player &);

//methods
	void talk(std::string s) const;
	std::string getVoc(void) const;
	std::string getName(void) const;
	long double getExp(void) const;
	int getLevel(void) const;
	int getHealth(void) const;
	int getId(void) const;
	static int getActObjects(void);
};



#endif /* PLAYER_HPP_ */
