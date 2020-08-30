#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
void readFile(std::fstream &file);
void writeFile(std::fstream &file);
void ProcessFile(std::fstream &file);
void displayOptions(void);
	std::string fileName;
int main(){
	std::fstream file;
	std::cout << "Enter the name of the file that you want to create and edit" << std::endl;
	std::getline(std::cin, fileName);
	for(bool run = true, i=0; run != false; i++){
		if(i ==0){
			file.open(fileName, std::ios::out);
			if(!file){
				std::cerr << "Could not open the file" << std::endl;
				exit(-1);
			}
			std::cout << "Enter something to write to the file" << std::endl;
			writeFile(file);
			file.close();
		}else{
			std::string input;
			int inputResponse;
			askNum:
			displayOptions();
			getline(std::cin, input);
			std::istringstream iss(input);
			iss >> inputResponse;
			if (iss.fail()) {
				std::cout << "Enter a valid number" << std::endl;
				goto askNum;
			}
				switch(inputResponse){
					case 1 :
						std::cout << "Truncate" << std::endl;
						file.open(fileName, std::ios::out | std::ios::trunc);
						ProcessFile(file);
						break;
					case 2 :
						std::cout << "Append" << std::endl;
						file.open(fileName, std::ios::out | std::ios::app);
						ProcessFile(file);
						break;
					case 3 :
						{
						std::cout << "Size" << std::endl;
						file.open(fileName, std::ios::out | std::ios::app| std::ios::ate);
						if(!file){
							std::cerr << "Could not open the file" << std::endl;
							exit(-1);
						}
						unsigned long size=file.tellg();
						std::cout << "The size of the file is: " << size << std::endl;
						file.close();
						}
						break;
					case 4 :
						run = false;
						break;
				}
			}

	}
	return 0;
}

void displayOptions(void){
	std::cout << "Enter 1 to reopen the file with truncated mode" << std::endl;
	std::cout << "Enter 2 to reopen the file with append mode" << std::endl;
	std::cout << "Enter 3 output the size of the file" << std::endl;
	std::cout << "Enter 4 to exit" << std::endl;
}


void ProcessFile(std::fstream &file){
	std::cout << "Enter something to write to the file" << std::endl;
	writeFile(file);
	file.close();
	file.open(fileName);
	readFile(file);
	file.close();
}
void readFile(std::fstream &file){
	std::string line;
	while(file){
		getline(file, line);
		std::cout << line << std::endl;
	}

}

void writeFile(std::fstream &file){
	std::string line;
	std::getline(std::cin, line);
	file<< line<<std::endl;
}
