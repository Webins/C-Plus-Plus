/*
 * Song.hpp
 *
 *  Created on: 28 ene. 2020
 *      Author: webins
 */

#ifndef SONGS_HPP_
#define SONGS_HPP_

#include <string>
#include <iostream>
#include <iomanip>
class Songs{
	friend std::ostream &operator<<(std::ostream &os, const Songs &obj);
	std::string title;
	std::string author;
	int rating;
public:
	Songs(void);
	Songs(std::string title, std::string author, int rating);
	bool operator==(const Songs &rhs);
	bool operator<(const Songs &rhs);
	std::string get_title(void) const;
	std::string get_author(void) const;
	int get_rating(void) const;
};







#endif /* SONGS_HPP_ */
