#include <iostream>
using namespace std;

int main() {
	int i = 10;
	double j = 1/static_cast<double>(i);
	cout.setf(ios::fixed); //Using a fixed point representation
	cout.setf(ios::showpoint); //Show the decimal point
	cout.precision(3);
	cout << j << endl;
}

