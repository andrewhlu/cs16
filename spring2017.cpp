#include <iostream>
using namespace std;

string getSmarterAlien(Alien* a1, Alien* a2) {
	if((a1 == NULL) || (a2 == NULL)) {
		cerr << "Invalid pointer(s)";
		exit(1);
	}
	if(a1 -> IQ == a2 -> IQ)
		return "";
	else if(a1 -> IQ > a2 -> IQ)
		return a1 -> name;
	else
		return a2 -> name;
}

int numFriendly(Alien* arr, int len, string planet) {
	if(len == 0)
		return 0;

	int nums = 0;
	for(int i = 0; i < len; i++) {
		if(((arr+i) -> planet == planet) && ((arr+i) -> isFriendly))
			nums++;
	}
}