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

void initBox(Box* b, Point p, double w, double h) {
	b.ul = p;
	b.width = w;
	b.height = h;
}

int main() {
	//Box b1 = {{500,600},10,20};
	//b1.ul.x = 50

	Box b1;
	Point p = {500,600};
	cout << "Created a box" << endl;

	initBox(b1, p, 10, 20);

	printBox(b1);

	return 0;
}