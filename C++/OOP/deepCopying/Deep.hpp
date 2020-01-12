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

class Deep{
private:
//Members
	int * data;
public:
//Constructors
	Deep(int);


//destructor
	~Deep();

//Copy constructor
	Deep(const Deep &);

//methods
	int getData(void);
	void setData(int);
};



#endif /* PLAYER_HPP_ */
