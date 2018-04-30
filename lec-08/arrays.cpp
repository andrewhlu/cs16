#include <iostream>
using namespace std;

int main() {
	double scores[5] = {100,90,99,50,40};

	for(int i = 0; i < 5; i++) {
		cout << scores[i] << endl;
	}

	cout << "Printing using the C++ 11 range based for loop" << endl;
	for(double item : scores) {
		cout << item << endl;
	}

	double sum = 0;
	for(int i = 0; i < 5; i++) {
		sum += scores[i];
	}

	cout << "Average midterm score is : " << sum/5 << endl;
}