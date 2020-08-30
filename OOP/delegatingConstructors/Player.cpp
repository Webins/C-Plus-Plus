#include "Player.hpp"


//Delegating constructor
Player::Player(std::string nameVal, std::string vocVal, int healthVal, long double expVal, int levelVal)
	:name(nameVal), voc(vocVal), health(healthVal), exp(expVal), level(levelVal){
};

Player::Player()
	:Player("none", "none", 150, 0, 1){};

Player::Player(std::string nameVal)
	:Player(nameVal, "none", 150, 0,1){};

Player::Player(std::string nameVal, std::string vocVal)
	:Player(nameVal, vocVal, 185, 4200, 1){};


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
