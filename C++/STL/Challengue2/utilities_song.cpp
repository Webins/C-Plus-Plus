#include "utilities_song.hpp"


void displayButtons(){
	std::cout << "Buttons" <<std::endl;
	std::cout << "F - Play First Song" << std::endl;
	std::cout << "Z - Play Last Song" << std::endl;
	std::cout << "N - Play Next Song" << std::endl;
	std::cout << "P - Play Previous Song" << std::endl;
	std::cout << "A - Add and play a new Song at current location" << std::endl;
	std::cout << "L - List The Current Playlist" << std::endl;
	std::cout << "Q - Exit from the system" << std::endl;
}


void displayMenu(){
	std::cout << "===================================================================================" << std::endl;
	std::cout << std::setw(30) << std::left << "Title"
			<<std::setw(30) << std::left << "Author"
			<<std::setw(20) << std::left << "Rating"
			<< std::endl;
}


void play_first_song(std::list<Songs>::iterator &actual_song,  std::list<Songs> &l){
	actual_song = l.begin();
	std::cout << "Playing: " <<  actual_song->get_title() << std::endl;
	displayMenu();
	std::cout << *actual_song << std::endl;


}


void play_last_song(std::list<Songs>::iterator &actual_song,  std::list<Songs> &l){
	actual_song = -- l.end();
	std::cout << "Playing: " <<  actual_song->get_title() << std::endl;
	displayMenu();
	std::cout << *actual_song << std::endl;
}



void play_next_song(std::list<Songs>::iterator &actual_song,  std::list<Songs> &l){
	if(actual_song++ == --l.end()){
		play_first_song(actual_song, l);
	}else{
		std::cout << "Playing: " <<  actual_song->get_title() << std::endl;
		displayMenu();
		std::cout << *actual_song << std::endl;
	}
}



void play_previous_song(std::list<Songs>::iterator &actual_song,  std::list<Songs> &l){
	if(actual_song == l.begin()){
		play_last_song(actual_song, l);
	}else{
		actual_song--;
		std::cout << "Playing: " <<  actual_song->get_title() << std::endl;
		displayMenu();
		std::cout << *actual_song << std::endl;
	}
}



void add_and_play_song(std::list<Songs>::iterator &actual_song,  std::list<Songs> &l){
	std::ofstream songs_file;
	songs_file.open("songs.txt", std::fstream::out | std::fstream::app);
	if(!songs_file){
		std::cout << "Error opening the file" << std::endl;
		exit(-1);
	}
	std::string entry;
	std::string title, author;
	int rating;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.clear();
	size_t count=1;
	do{
		switch(count){
			case 1: {
				std::cout << "Enter the title of the song: ";
				std::getline(std::cin, title);
				if(title.empty()) std::cout << "Cannot enter an empty title" << std::endl;
				else {
					songs_file<< title<< "-";
					count++;
				}
			} break;
			case 2: {
				std::cout << "Enter the author of the song: ";
				std::getline(std::cin, author);
				if(author.empty()) std::cout << "Cannot enter an empty author" << std::endl;
				else {
					songs_file<< author<< "-";
					count++;
				}
			}break;
			case 3: {
				std::cout << "Enter the rating of the song: ";
				getline(std::cin, entry);
				std::istringstream validator {entry};
				if(validator >> rating && (validator.eof())) {
					songs_file<< rating<< std::endl;
					count++;
				}
				else std::cout << "Enter an integer value try again" << std::endl;
			}break;
		}
		}while(count < 4);

	l.push_back(Songs{title, author, rating});
	play_last_song(actual_song, l);
	songs_file.close();

}


void list_playlist(const std::list<Songs> &l){
	std::cout << "                                     LIST                                         " << std::endl;
	displayMenu();
	for(const auto &songs: l)
		std::cout << songs << std::endl;
	std::cout << "===================================================================================" << std::endl;
}


std::list<Songs> getSongs(void){
	std::fstream songs_file;
	songs_file.open("songs.txt");
	if(!songs_file){
		std::cout << "Error opening the file" << std::endl;
		exit(-1);
	}
	std::list<Songs> songs_list;
	std::string title, author, rating;

	int i=1;
	char c;
	while(!songs_file.eof()){
		if(i == 4){
			songs_list.push_back(Songs{title, author, atoi(rating.c_str())});
			title.clear();
			author.clear();
			rating.clear();
			i =1;
		}
		songs_file.get(c);
			if(c != '-' && c != '\n'){
				switch(i){
					case 1 : title+=c;  break;
					case 2 : author+=c; break;
					case 3 : rating+=c; break;
				}
			}else {
				i++;
			}
		}


	songs_file.close();
	return songs_list;
}
