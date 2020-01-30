#include "Songs.hpp"

std::ostream &operator<<(std::ostream &os, const Songs &obj){
	return os << std::setw(30) << std::left << obj.title
			<< std::setw(30) << std::left << obj.author
			<< std::setw(20) << std::left << obj.rating;
 }


Songs::Songs(void)
	:title("No_Title"), author("Unknown"), rating(0){};


Songs::Songs(std::string title, std::string author, int rating)
		:title(title), author(author), rating(rating){};


bool Songs::operator==(const Songs &rhs){
		return (this->author == rhs.author && this->title == rhs.title && this ->rating == rhs.rating);
}

bool Songs::operator<(const Songs &rhs){
		return this->rating < rhs.rating;
}

std::string Songs::get_title(void) const{
		return title;
}


std::string  Songs::get_author(void) const{
		return author;
}

int  Songs::get_rating(void) const {
		return rating;
}
