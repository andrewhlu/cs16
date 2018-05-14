#include <iostream>
using namespace std;

int* createAnInt() {
	int *p;
	p = new int; //Make P point to an int on the heap
	*p = 15;
	return p;
}

int main() {
	int *q = createAnInt();
	cout << *q << endl;
}