//ex02.cpp
//Reading from files
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream ifs;
	//Open a file for reading
	ifs.open("deadparrot.txt");
	//Open will fail if file does not exist, but your program will not crash

	if(!ifs) {
		cerr << "Open failed " << endl;
		return 0;
	}

	string line;
	int numparrots = 0;
	char response = '\n';

	while(response == '\n') {
		getline(ifs, line); //Read the next line and strip \n

		if(!ifs) {
			break;
		}

		cout << line << endl;//Process the line

		int pos = line.find("parrot");

		if(pos >= 0) {
			numparrots++;
		}

		response = cin.get();
	}
	cout << "Lines that included 'parrot': " << numparrots << endl;

	// string line;
	// getline(ifs, line); //gets line 1
	// cout << line << endl;

	// getline(ifs, line); //gets line 2
	// cout << line << endl;

	//Close the file
	ifs.close();

	return 0;
}