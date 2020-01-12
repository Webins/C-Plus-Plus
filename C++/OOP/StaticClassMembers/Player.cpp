#include "Player.hpp"

std::vector <int> ids;
//static values
int Player::actObjects =0;
int Player::classId =1;
//Constructor
Player::Player(std::string nameVal, std::string vocVal, int healthVal, long double expVal, int levelVal, int id)
	:name(nameVal), voc(vocVal), health(healthVal), exp(expVal), level(levelVal), id(classId){
		for(unsigned int i =0; i < ids.size(); i++){
			if(ids.at(i) == id) id = actObjects;
		}
		ids.push_back(id);
		classId++;
		actObjects++;
};


//destructor
Player::~Player(){
	actObjects--;
}

Player::Player(const Player &source)
	:Player(source.name, source.voc,source.health, source.exp, source.level, source.id){
	std::cout << "Made a copy of " << source.name << std::endl;
}

//methods

void Player::talk(std::string s) const{
	std::cout << name <<"[" << level << "]" << " says: " << s << std::endl;
}
std::string Player::getVoc(void) const{
	return voc;
}
std::string Player::getName(void) const{
	return name;
}
 long double Player::getExp(void) const{
	return exp;
}
int Player::getLevel(void) const{
	return level;
}
int Player::getHealth(void) const{
	return health;
}
int Player::getId(void) const{
	return id;
}
int Player::getActObjects(void){
	return actObjects;
}

