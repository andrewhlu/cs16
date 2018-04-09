//fizzbuzz_0.cpp

#include <iostream>
using namespace std;

int main ()
{
	int x; //Declaration for x, uninitialized variables have junk value
	cout << "Enter a number: ";
	cin >> x;

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