#include "Movies.hpp"

std::vector <Movie> Movies::moviesCollection;

std::vector <Movie> &Movies::getCollection(void){
	return moviesCollection;
}
Movie * Movies:: findMovie(std::string s){
	for(unsigned int i=0; i < Movies::getCollection().size();i++){
				if((Movies::getCollection().at(i).getName()) == s)
					return &(Movies::getCollection().at(i));
		}
	std::cout << "Movie name \"" <<s << "\" not found" << std::endl;
	return nullptr;
}
void Movies::addMovie(Movie m){
	Movies::getCollection().push_back(m);
}

void Movies::deleteMovie(std::string s){
	for(unsigned int i=0; i < Movies::getCollection().size();i++){
			if((Movies::getCollection().at(i).getName()) == s){
				Movies::getCollection().erase(Movies::getCollection().begin()+i);
				return;
			}
	}
	std::cout << "Movie name: " <<s << "not found" << std::endl;
}

