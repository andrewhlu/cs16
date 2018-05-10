#include <iostream>
using namespace std;

void foo(int* b, int length) {
	cout << b[2] << endl;
}

int main() {
	int arr[] = {20,30,50,80,90};
	//arr is synonymous with &arr[0]

	int *p = arr;
	p = &arr[2];

	foo(arr, 5); //call foo
}