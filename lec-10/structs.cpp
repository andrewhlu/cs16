#include <iostream>
using namespace std;

struct Point {
	double x;
	double y;
};

struct Box {
	Point ul;
	double width;
	double height;
};

void printBox(Box b){
	cout << "(" << b.ul.x << "," << b.ul.y << ")" << endl;
	cout << "Width: " << b.width << endl;
	cout << "Height: " << b.height << endl;
}

int main() {
	Box b1 = {{500,600},10,20};
	b1.ul.x = 50;

	cout << "Created a box" << endl;
	printBox(b1);

	return 0;
}