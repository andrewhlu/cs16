#include <iostream>
using namespace std;

double averageScore(double sc[], int length);

int main() {
	int* p;
	int y = 3;

	p = &y;

	cout << "Address of p is: " << &p << endl;
	cout << "Value of p is: " << p << endl;
	cout << "Value of *p is: " << *p << endl;
	cout << "Value of y is: " << y << endl;

	*p = 5;

	cout << "After changing y to 5" << endl;
	cout << "Address of p is: " << &p << endl;
	cout << "Value of p is: " << p << endl;
	cout << "Value of *p is: " << *p << endl;
	cout << "Value of y is: " << y << endl;
}