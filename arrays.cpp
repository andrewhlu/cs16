#include <iostream>
using namespace std;

int getMax(int* arr, int len) {
	int max = arr[0];
	for(int i = 1; i < len; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int arr[]={3, 1, 2, 5, 4};

	cout << getMax(arr, 5) << endl;
}