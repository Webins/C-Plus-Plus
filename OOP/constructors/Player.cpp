#include "Player.hpp"

Player::Player(){
	name = "none";
};
Player::Player(std::string name){
	this->name= name;
};
Player::Player(std::string name, int health){
	this->name= name;
	this->health = health;
};
Player::Player(std::string name, int health, long double exp){
	this->name= name;
	this->health = health;
	this->exp = exp;
};
Player::Player(std::string name, int health, long double exp, int level, std::string voc){
	this->name= name;
	this->health = health;
	this->exp = exp;
	this->level = level;
	this->voc = voc;

};
	//destructor

Player::~Player(){
	std::cout <<"Destructor called for " << name << std::endl;
}
	//methods

void Player::talk(std::string s){
	std::cout << name << " says: " << s << std::endl;
}
std::string Player::getVoc(void){
	return voc;
}
std::string Player::getName(void){
	return name;
}
 long double Player::getExp(void){
	return exp;
}
int Player::getLevel(void){
	return level;
}
int Player::getHealth(void){
	return health;
}

