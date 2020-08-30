#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main(){
	string line, answerKey;
	vector <string> names;
	vector <string> choices;
	int sum =0,  i=1;
	double avg;
	ifstream in_file;
	in_file.open("grades.txt");
	if(!in_file){
		cerr << "Couldn't open the file, exiting" << endl;
		exit(-1);
	}else cout << "The file is opened now" << endl << endl;

	while(!in_file.eof()){
		if(i == 1) getline(in_file, answerKey);
		else if(i%2 ==0){
			getline(in_file, line);
			names.push_back(line);
		}else{
			getline(in_file, line);
			choices.push_back(line);
		}
		i++;
	}
	cout << setw(10) << left << "|Name" << setw(10) << "|Score" << setw(7) << "|Awnser" << "|" <<  endl;
	for(unsigned int i=0; i < names.size(); i++){
		int grade=0, j=0;
		for(auto const &letter: choices.at(i)){
			if(letter == answerKey.at(j)) grade++;
			j++;
		}
		cout << setw(10) << left << '|'+ names.at(i) << setw(10) << '|'+ to_string(grade) << setw(7) << '|'+choices.at(i) << "|" << endl;
		sum+=grade;
	}
	avg = static_cast<double>(sum) / names.size();
	cout << endl;
	cout << "The grade average is: " <<  setprecision(2) << fixed <<avg << endl;
	cout << endl;
	in_file.close();
	cout << "The file is closed now" << endl;
	return 0;
}
