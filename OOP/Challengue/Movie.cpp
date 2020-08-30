#include "Movie.hpp"

int Movie::MoviesCreated=0;

static std::vector <std::string> movieNames;

//Constructor
Movie::Movie(std::string nameVal, std::string ratingVal, std::string genreVal, int likeVal, int id)
	:name(nameVal), rating(ratingVal), genre(genreVal), like(likeVal), id(MoviesCreated){
		for(unsigned int i=0; i < movieNames.size(); i++){
			while(movieNames.at(i) == name){
				int c;
				std::cout << "The movie is already in the app\nEnter another movie" << std::endl;
				std::cout << "Enter the name: ";
				std::getline(std::cin, name);
				std::cout << "Enter the rating: ";
				std::getline(std::cin, rating);
				std::cout << "Enter the genre: ";
				std::getline(std::cin, genre);
				std::cout << "Rate this movie between 1-10: ";
				std::cin >> like;
				if((c= getchar()) =='\n') c+=c;
			}
		}
		if(name != "None") movieNames.push_back(name);
		MoviesCreated++;
}
Movie::Movie(std::string nameVal, std::string ratingVal, std::string categoryVal, int likeVal)
	:Movie(nameVal, ratingVal,categoryVal, likeVal, MoviesCreated){};

Movie::~Movie(){
}
Movie::Movie()
	:Movie("None", "None", "None", 0, -1){};


Movie::Movie(const Movie &source)
	:name(source.name), rating(source.rating), genre(source.genre), like(source.like),id(source.id){}


//Methods
std::string Movie::getName(void) const{
	return name;
}
std::string Movie::getRating(void) const{
	return rating;
}
std::string Movie::getGenre(void) const{
	return genre;
}

int Movie::getId(void) const{
	return id;
}

int Movie::getMoviesCreated(void){
	return Movie::MoviesCreated;
}

int Movie::getLike(void) const{
	return like;
}


