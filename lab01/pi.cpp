#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int terms;

	do {
		cout << "Enter the value of the parameter 'n' in the Liebniz formula (or -1) to quit:" << endl;
		cin >> terms;

		if(terms == -1) {
			exit(1);
		}

		int n = 1;
		double pi = 0;
		string termout;

		for(int i = 0;i <= terms;i = i++) {
			pi = pi + (((-1)^i)/static_cast<double>(n));
			n = n + 2;
		}

		pi = 4*pi;

		if(terms == 0) {
			string termout = " term";
		}
		else {
			string termout = " terms";
		}

		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(3);
		cout << "The approximate value of pi using " << terms+1 << termout << " is: " << pi << endl;
	}
	while(true);
}