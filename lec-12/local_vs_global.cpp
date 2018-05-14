#include <iostream>
using namespace std;

int* createAnInt() {
	int *p;
	p = new int; //Make P point to an int on the heap
	*p = 15;
	return p;
}

int* createAnArrayOfInts(int len) {
	int* p = new int[len];

	for(int i = 0; i < len; i++) {
		p[i] = 10; //Pointer arithmetic works here, equivalent to *(p+i)
	}

	return p;
}

int main() {
	int *q = createAnInt();
	cout << *q << endl;

	q = createAnArrayOfInts(5);
	cout << "Accessing an array on the heap" << endl;
	for(int i = 0; i < 5; i++) {
		cout << q[i] << " ";
	}
	cout << endl;
}