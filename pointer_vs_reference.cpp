#include <iostream>
using namespace std;

void swapWithPointer(int* a, int* b) {
	//In this method, we swap the values using pointers
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swapWithReference(int &c, int &d) {
	//In this method, we swap the values using references
	int temp = c;
	c = d;
	d = temp;
}

int main() {
	int w = 3, x = 4;
	int y = 3, z = 4;

	cout << "Swap with Pointers:" << endl;
	cout << "Before Swap: w = " << w << ", x = " << x << endl;
	swapWithPointer(&w, &x);
	cout << "After Swap:  w = " << w << ", x = " << x << endl;

	cout << "Swap with References:" << endl;
	cout << "Before Swap: y = " << y << ", z = " << z << endl;
	swapWithReference(y, z);
	cout << "After Swap:  y = " << y << ", z = " << z << endl;

	cout << "Both functions achieve the same output." << endl;
}