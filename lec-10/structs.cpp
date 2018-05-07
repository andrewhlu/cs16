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

int main() {
	Box b1 = {{500,600},10,20};

	cout << "Created a box" << endl;
	cout << "(" << b1.ul.x << "," << b1.ul.y << ")" << endl;
	cout << "Width: " << b1.width << endl;
	cout << "Height: " << b1.height << endl;
	return 0;
}