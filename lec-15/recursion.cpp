#include <iostream>
using namespace std;

void printArray(int arr[], int len) {
	if(len == 0) {
		return;
	}
	else {
		cout << arr[0] << " ";
		printArray(arr+1, len-1);
	}
}

void funWithArrays() {
	int arr[] = {5,3,2,1,345,46,66,6,5};
	int len = sizeof(arr)/sizeof(int);

	printArray(arr, len);
	cout << endl;
}

int main() {
	funWithArrays();
}