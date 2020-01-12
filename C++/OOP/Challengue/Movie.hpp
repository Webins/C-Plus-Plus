#ifndef MOVIE_HPP_
#define MOVIE_HPP_
#include <string>
#include <vector>
#include <iostream>
class Movie{
private:
	std::string name;
	std::string rating;
	std::string genre;
	int like;
	int id;
	static int MoviesCreated;
	friend class Movies;
public:
	//Constructor
	Movie(std::string, std::string, std::string, int, int);
	Movie(std::string, std::string, std::string, int);
	Movie();
	//Copy constructor
	Movie(const Movie &);

	//Destructor
	~Movie(void);
	//Methods
	std::string getName(void) const;
	std::string getRating(void) const;
	std::string getGenre(void) const;
	int getLike(void) const;
	int getId(void) const;
	static int getMoviesCreated(void);
};


#endif
