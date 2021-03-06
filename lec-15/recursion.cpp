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

int countOddRecursive(int a[], int len) {
	if(len == 0) { //Base Case
		return 0;
	}
	else if(a[0] % 2 == 1) {
		//Current element is odd
		return 1 + countOddRecursive(a+1, len-1);
	}
	else {
		//Current element is even
		return countOddRecursive(a+1, len-1);
	}
}

int countOddIterative(int a[], int len) {
	int count = 0;
	for(int i = 0; i < len; i++) {
		if(a[i] % 2 == 1) {
			count++;
		}
	}
	return count;
}

void funWithArrays() {
	int arr[] = {5,3,2,1,345,46,66,6,5,13,10};
	int len = sizeof(arr)/sizeof(int);

	printArray(arr, len);
	cout << endl;
	
	cout << "# Odd (R) " << countOddRecursive(arr, len) << endl;
	cout << "# Odd (I) " << countOddIterative(arr, len) << endl;
}

int main() {
	funWithArrays();
}