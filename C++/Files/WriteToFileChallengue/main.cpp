#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

static const string rom_jul_play= "romeo_juliet_full.txt";

void copyTextFile(ifstream &src, ofstream &cpy, bool flag);

int main(){
		string input;
		ifstream src;
		ofstream cpy;
		int inputResponse;
		askNum:
		cout << "Select one(1) of the two(2) options to make a copy of the Romeo and Juliet play with the numbers of line that has" << endl;
		cout << "1. Set lines with newlines in blank" << endl;
		cout << "2. Don't set lines with newlines in blank" << endl;
		cout << "3. Exit" << endl;
		getline(cin, input);
		istringstream iss(input);
		iss >> inputResponse;
		if (iss.fail()) {
			std::cout << "Enter a valid number" << std::endl;
			goto askNum;
		}

		switch (inputResponse) {
			case 1:
				src.open(rom_jul_play, ios::in);
				cpy.open("copy_"+rom_jul_play, ios::out);
				if(!src || !cpy){
					cerr <<"Cannot open the file" << endl;
					exit(-1);
				}
				copyTextFile(src, cpy, true);
				cout << "Text Copied!" << endl;
				break;
			case 2:
				src.open(rom_jul_play, ios::in);
				cpy.open("copy_"+rom_jul_play, ios::out);
				if(!src || !cpy){
					cerr <<"Cannot open the file" << endl;
					exit(-1);
				}
				copyTextFile(src, cpy, false);
				cout << "Text Copied!" << endl;
				break;
			case 3:
				exit(0);
				break;
			default:
				cout << "Enter a number between 1-3" << endl;
				goto askNum;
				break;
		}
	src.close();
	cpy.close();

}


void copyTextFile(ifstream &src, ofstream &cpy, bool flag){
	string line;
	size_t lineNumber=1;
	while(getline(src,line)){
		if(flag){
			cpy << setw(3) << left << to_string(lineNumber) + ":" << line << endl;
			lineNumber++;
		}else{
			lineNumber++;
			if(line.empty()) cpy << line << endl;
			else cpy << setw(3) << left << to_string(lineNumber) + ":" << line << endl;
		}
	}
}
