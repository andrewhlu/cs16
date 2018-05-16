#include <iostream>
using namespace std;

int* createPointer() {
	int b = 5;
	cout << &b << endl;
	return &b;
}

int main() {
	int *p = createPointer();
	if(p) {
		cout << "This worked" << endl;
	}
	else {
		cout << "This didn't work" << endl;
	}
}
