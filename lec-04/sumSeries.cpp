//sumSeries.cpp

#include <iostream>
using namespace std;

//1 + 1/2 + 1/3 + ... + 1/n

double sumSeries(int n); //Declaration of sumSeries

int main() {
	int n;
	char ans = 'y';

	while(1) {
		cout << "Enter the value of n: ";
		cin >> n;

		double result = sumSeries(n);

		cout << "Sum of a " << n << " term series is " << result << endl;

		cout << "Do you want to continue: ";
		cin >> ans;

		if(ans != 'y') {
			break;
		}
	}
}

double sumSeries(int n) { //Definition of sumSeries
	double result = 0; //Result is a local variable

	for(int i = 1; i <= n; i++) {
		result = result + 1/static_cast<double>(i);
	}

	return result;
}