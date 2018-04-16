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

string drawRightTriangle(int width) {
	string result = "";

	for(int i = 0;i < width; i++) {
		for(int j = 0;j <= i; j++) {
			result += "*";
		}
		result+="\n";
	}

	return result;
}

string drawTriangle(int width) {
	return "42";
}

//Test-driven development
void assertEqual(string expected, string actual, string message=""){
	if(expected == actual) {
		cout << "PASSED: " << message << endl;
	}
	else {
		cout << "  FAILED: " << message << endl << " Expected: " << "[\n" << expected << "]" << "Actual: [\n" << actual << "]" << endl;
	}
}

int main(int argc, char* argv[]) {
	if(argc != 2) {
		cerr << "Usage: " << argv[0] << " width" << endl;
		return 0;
	}

	int width = atoi(argv[1]);
	string sq1 = drawSquare(width);
	cout << sq1 << endl;
	string sq2 = drawRightTriangle(width);
	cout << sq2 << endl;
}