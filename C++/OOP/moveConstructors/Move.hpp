
#include <string>
#include <iostream>
#ifndef PLAYER_HPP_
#define PLAYER_HPP_

class Move{
private:
//Members
	int * data;
public:
//Constructors
	Move(int);


//destructor
	~Move();

//Move constructor
	Move(Move &&);

//Copy constructor
	Move(const Move &);

//methods
	int getData(void) const;
	void setData(int);
};



#endif /* PLAYER_HPP_ */
