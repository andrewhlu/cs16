//ex02.cpp
//Reading from files
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream ifs;
	//Open a file for reading
	ifs.open("animals.txt");
	//Open will fail if file does not exist, but your program will not crash

	if(!ifs) {
		cerr << "Open failed " << endl;
		return 0;
	}

	string line;
	while(1) {
		getline(ifs, line); //Read the next line and strip \n

		if(!ifs) {
			break;
		}

		cout << line << endl;
	}

	// string line;
	// getline(ifs, line); //gets line 1
	// cout << line << endl;

	// getline(ifs, line); //gets line 2
	// cout << line << endl;

	//Close the file
	ifs.close();

	return 0;
}