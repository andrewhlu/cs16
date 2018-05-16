#include <iostream>
#include <cstdlib>
using namespace std;

struct Alien {
	string name;
	string planet;
	int IQ;
	bool isFriendly;
};

string getSmarterAlien(Alien num1, Alien num2) {
	if(num1.IQ == num2.IQ) {
		string result = "";
		return result;
	}
	else if(num1.IQ > num2.IQ) {
		return num1.name;
	}
	else if(num2.IQ > num1.IQ) {
		return num2.name;
	}
	else {
		cerr << "Invalid pointer(s)" << endl;
		exit(1);
	}
}

int numFriendly(Alien* aliens, int numElements, string planet) {
	int friendly = 0;
	if(numElements == 0) {
		return 0;
	}
	else {
		for(int i = 0; i < numElements; i++) {
			if(aliens[i].planet == planet) {
				if(aliens[i].isFriendly) {
					friendly++;
				}
			}
		}
	}

	return friendly;
}

int main() {
	Alien alien1 = {"Bartledannians", "Bartledann", 100, false};
	Alien alien2 = {"Dentrassis", "Vogon", 90, true};
	Alien alien3 = {"Hooloovoo", "Rupert", 230, true};
	Alien alien4 = {"Grebulons", "Rupert", 110, true};
	Alien alien5 = {"Hingefreel", "Vogon", 170, false};

	cout << getSmarterAlien(alien1, alien2) << endl;

	Alien aliens[] = {alien1, alien2, alien3, alien4, alien5};
	cout << numFriendly(aliens, 5, "Bartledann") << endl;
	cout << numFriendly(aliens, 5, "Vogon") << endl;
	cout << numFriendly(aliens, 5, "Rupert") << endl;
	cout << numFriendly(aliens, 5, "Earth") << endl;
}