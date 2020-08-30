/*
 * utilities_song.hpp
 *
 *  Created on: 28 ene. 2020
 *      Author: webins
 */

#ifndef UTILITIES_SONG_HPP_
#define UTILITIES_SONG_HPP_

#include <iostream>
#include <iomanip>
#include <fstream>
#include <list>
#include <algorithm>
#include <string>
#include <limits>

#include "Songs.hpp"

void displayMenu();
void displayButtons();
void play_first_song(std::list<Songs>::iterator &actual_song,  std::list<Songs> &l);
void play_last_song(std::list<Songs>::iterator &actual_song,  std::list<Songs> &l);
void play_next_song(std::list<Songs>::iterator &actual_song,  std::list<Songs> &l);
void play_previous_song(std::list<Songs>::iterator &actual_song,  std::list<Songs> &l);
void add_and_play_song(std::list<Songs>::iterator &actual_song,  std::list<Songs> &l);
void list_playlist(const std::list<Songs> &l);
std::list<Songs> getSongs(void);




#endif /* UTILITIES_SONG_HPP_ */
