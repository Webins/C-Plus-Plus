#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
void tolowerS(string &);
bool checkWord(string &, vector <string> &);
void displayMenu(void);
int main(){
	string menuInput;
	string fileName;
	fstream file;
	int menuResponse;
	bool run = true;
	while(run){
		backToMenu:
		displayMenu();
		getline(cin, menuInput);
		menuResponse = stoll(menuInput, nullptr, 10);
		if(menuResponse < 0){
			cout << "Enter a valid integer number between 1-3" << endl;
			goto backToMenu;
		}
		switch(menuResponse){
		case 1: {
			askForFileName:
			cout << "Enter the name of the file: ";
			getline(cin, fileName);
			file.open(fileName);
			try{
				if(!file){
					throw std::runtime_error("Could not open file");
				}
			}catch(const runtime_error &e){
					e.what();
				goto askForFileName;
			}
			cout << "File " << fileName << " opened successfully" <<endl;
		}break;
		case 2: {
				vector <string> strings;
				string word, input;
				int totalCharacters =0, matches=0, lines=0, wordCount=0;
				while(input.empty()){
					cout << "Enter a word to search if it exist into the romeo and juliet play and how many time it's repeated" << endl;
					cout << "Word: ";
					getline(cin, input);
				}
			}
				tolowerS(input);
				while(file >> word){
					wordCount++;
					tolowerS(word);
					int p;
					totalCharacters += word.size();
					p = word.find(input);
					if(p >= 0){
						matches++;
						if(checkWord(word, strings)) strings.push_back(word);
					}
				}
				int i =0, num =1;
				cout << "Total characters: " << totalCharacters << endl;
				cout << "Words: " << wordCount << endl;
				cout << "Matches of the word \"" << input << "\": " << matches << endl;
				cout << "Words related :\n[";
				for(auto const &s: strings){
					if(i == 4){
						i=0;
						cout  <<"]"<<endl << "[";
					}
					cout << setw(20) << left << to_string(num)+":"+s;
					i++;
					num++;
				}
				const int sizeMod = (strings.size()) % 4;
				switch(sizeMod){
					case 1: {cout << left << setw(60) << " " << "]"; } break;
					case 2: {cout << left << setw(40) << " " << "]"; } break;
					case 3: {cout << left << setw(20) << " " << "]"; } break;
					case 0: {cout << "]"; } break;
					default: {};
				}
				cout << "Lines: " << lines  << endl;
		}break;
		case 3: {cout << "Exiting..."; run = false;} break;
		}
	}
	return 0;
}


void tolowerS(string &s){
	for(unsigned int i=0; i <s.size(); i++){
		s.at(i) = tolower(s.at(i));
	}
}

bool checkWord(string &s, vector <string> &strings){
	for(auto const &strs : strings){
		if(s == strs) return false;
	}
	return true;
}

void displayMenu(void){
	cout << "1. Select the file name" << endl;
	cout << "2. Search for a word within the file(File name is required)" << endl;
	cout << "3. Exit" << endl;
}





