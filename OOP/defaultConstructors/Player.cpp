#include "Player.hpp"


//Delegating constructor
Player::Player(std::string nameVal, std::string vocVal, int healthVal, long double expVal, int levelVal)
	:name(nameVal), voc(vocVal), health(healthVal), exp(expVal), level(levelVal){
};


//destructor
Player::~Player(){
	std::cout <<"Destructor called for " << name << std::endl;
}
	//methods

void Player::talk(std::string s){
	std::cout << name <<"[" << level << "]" << " says: " << s << std::endl;
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
