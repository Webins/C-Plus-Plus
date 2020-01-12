#ifndef MOVIES_HPP_
#define MOVIES_HPP_
#include <string>
#include <vector>
#include "Movie.hpp"

class Movies{
private:
	friend class Movie;
	static std::vector <Movie> moviesCollection;
public:
	double categoryPerc(std::string);
	double categoryPercLike(std::string);
	void addMovie(Movie);
	void deleteMovie(std::string);
	Movie * findMovie(std::string);
	static std::vector <Movie> &getCollection();
};


#endif
