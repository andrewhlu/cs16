#include <iostream>
using namespace std;

void createHeap() {
	int *p = new int;
}

int main() {
	int counter = 0;
	while(true) {
		createHeap();
		counter++;
		cout << "Number of heap variables: " << counter << endl;
	}
}