#include <iostream>
#include "utilities_song.hpp"
#include "Songs.hpp"
int main(){
	char c;
	std::list<Songs> l;
	l = {getSongs()};
	std::list<Songs>::iterator actual_song = l.begin();
	bool run = true;
	while(run){
		displayButtons();
		std::cout << "Enter a selection: ";
		std::cin >> c;
		switch(tolower(c)){
			case 'f' : play_first_song(actual_song, l); break;
			case 'z' : play_last_song(actual_song, l); break;
			case 'n' : play_next_song(actual_song, l); break;
			case 'p' : play_previous_song(actual_song, l); break;
			case 'a' : add_and_play_song(actual_song, l); break;
			case 'l' : list_playlist(l); break;
			case 'q' : run = false; break;
			default: std::cout << "Enter a correct key" << std::endl; break;
		}
	}
return 0;
}
