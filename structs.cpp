#include <iostream>
#include <sstream>  // for ostringstream
#include <iomanip> // for setprecision
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

void initBox(Box &b, double ulx, double uly, double width, double height) {
	b.ul.x = ulx;
	b.ul.y = uly;
	b.width = width;
	b.height = height;
}

double areaOfBox(struct Box *b) {
	if(b) {
		return (*b).width * (*b).height;
	}
}

string boxToString(Box b, int precision) {
	//Copied from lab05
  	// SAMPLE FORMAT: [ul=(3.4,-5),w=5,h=7]
  	ostringstream oss;
  	oss << setprecision(precision); // set precision to 3 significant figures (NOT decimal places!)
  	oss << "ul=(" << b.ul.x << "," << b.ul.y << "),w=" << b.width << ",h=" << b.height;
  	return oss.str();
}

int main() {
	Box b;
	initBox(b, 1.0, 2.0, 3.0, 4.0);

	cout << boxToString(b,2) << endl;
	cout << areaOfBox(&b) << endl;
}