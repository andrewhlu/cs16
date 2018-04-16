//asciiArt.cpp

#include <iostream>
#include <cstdlib>
using namespace std;

string drawSquare(int width){

	string result="";

	for(int i =0; i<width;i++){
		for(int j =0; j<width;j++){
			result+="*";
		}
		result+="\n";
	}

	return result;
}


string drawRightTriangle(int width){

	string result="";

	for(int i =0; i<width;i++){
		for(int j =0; j<=i;j++){
			result+="*";
		}
		result+="\n";
	}

	return result;
}
/*
width = 3, num rows = 2

 * 
***


width = 5, rows = 3


  * 
 ***
*****

width = 7, rows = 4 
In general rows = (width+1)/2

   * 
  ***
 *****
*******
*/

string drawTriangle(int width) {
	int rows = (width+1)/2;

	string result = "";

	int numSpaces = 1;
	int numStars = 1;

	for(int i = 0; i < rows; i++) {
		string line = "";

		string spaces = " ";
		string stars = "*";
		
		for(int j = 0; j < numSpaces; j++) {
			spaces = spaces + " ";
		}
		for(int j = 0; j < numSpaces; j++) {
			stars = stars + "*";
		}

		line = spaces + stars + spaces + "\n";

		result = result + line;
		numSpaces = numSpaces - 1;
		numStars = numStars + 2;
	}




	return result;
}

//Test-driven development
void assertEqual(string expected, string actual, string message=""){
	if(expected == actual) {
		cout << "PASSED: " << message << endl;
	}
	else {
		cout << "  FAILED: " << message << endl << " Expected: " << "[\n" << expected << "]" << "Actual: [\n" << actual << "]" << endl;
	}
}

void testdrawTrinagle() {
	string exp1 = 
	" * \n"
	"***\n";

	string act1 = drawTriangle(3);
	assertEqual(exp1, act1, " width:3");

	// width = 3, num rows = 2

	//  * 
	// ***
}





int main(int argc, char* argv[]){
	if(argc!=2){
		cerr<<"Usage: "<<argv[0]<<" width "<<endl;
		exit(0);
	}

	// assertEqual("Apple","Apple", "testing test function assertEqual");
	// int width = atoi(argv[1]);
	// string sq = drawSquare(width);
	// cout<<sq<<endl;
	// sq = drawRightTriangle(width);
	// cout<<sq<<endl;
	
	testdrawTrinagle();
}