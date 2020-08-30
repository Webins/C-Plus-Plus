#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(){
	string line;
	int i =1;
	ifstream in_file;
	in_file.open("textFile.txt");
	if(!in_file){
		cerr << "Couldn't open the file, exiting" << endl;
		exit(-1);
	}else cout << "The file is opened now" << endl;


	//Line per line formatted
//	while(!in_file.eof()){
//		getline(in_file, line);
//		cout << i << " Line: " << line << endl;
//		i++;
//	}
	//OR
//	while(getline(in_file, line)){
//		cout << i << " Line: " << line << endl;
//		i++;
//	}

	//One char per time unformatted
	char c;
	while(in_file.get(c)){
		cout << c;
	}

	in_file.close();
	cout << "The file is closed now" << endl;
	return 0;
}
