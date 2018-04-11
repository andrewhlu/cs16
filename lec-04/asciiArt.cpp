//asciiArt.cpp

#include <iostream>
#include <cstdlib>
using namespace std;

string drawSquare(int width) {
	string result = "";

	for(int i = 0;i < width; i++) {
		for(int j = 0;j < width; j++) {
			result += "*";
		}
		result+="\n";
	}

	return result;
}

int main(int argc, char* argv[]) {
	if(argc != 2) {
		cerr << "Usage: " << argv[0] << " width" << endl;
		return 0;
	}

	int width = atoi(argv[1]);
	string sq = drawSquare(width);
	cout << sq << endl;
}