#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int rows;
	int columns;

	do {
		cout << "Enter number of rows and columns:" << endl;
		cin >> rows >> columns;

		for(int i = 1; i <= rows; i++) {
			for(int j = 1; j <= columns; j++) {
				cout << "X.";
			}
			if(columns != 0) {
				cout << endl;
			}
		}
	}
	while(rows != 0 && columns != 0);
}