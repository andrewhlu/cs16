//fizzbuzz_1.cpp

#include <iostream>
#include <cstdlib>
using namespace std;

int main (int argc, char* argv[])
{
	int x; //Declaration for x, uninitialized variables have junk value

	if(argc != 2) {
		cerr << "Usage " << argv[0] << " number " << endl;
		exit(1);
	}

	//argv[1] is the second parameter passed to the program
	x = atoi(argv[1]); //Converts a string of numeric characters to a number

	//cout << "Number of Arguments: " << argc << endl;

	if(x % 3 == 0) { //x is divisible by 3
		cout << "fizz";
		if(x % 5 == 0) {
			cout << "buzz";
		}
		cout << endl;
	}
	else if(x % 5 == 0) {
		cout << "buzz" << endl;
	}
	else {
		cout << x << endl;
	}

	return 0;
}