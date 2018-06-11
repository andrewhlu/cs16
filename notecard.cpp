//Inverted Triangle
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
	if(argc != 2) {
		cerr << "Usage: " << argv[0] << " width" << endl;
		exit(1);
	}
	string out = "";
	for(int i = 0; i < atoi(argv[1]); i++) {
		//Print spaces
		for(int j = 0; j < i; j++) {
			out += " ";
		}
		//Print stars
		for(int j = 0; j < atoi(argv[1])-i; j++) {
			out += "*";
		}
		out += "\n";
	}
	cout << out;
}

//Linked List, Strings
//Precondition: The address of a valid LinkedList and a char value //that may be an alphabet in either lower or upper case
//Postcondition: Adds a new node with data element set to value to the //end of the linked list. 
void addToEndOfList(LinkedList* list, char value) {
	Node* n = new Node;
	n -> data = value;
	n -> next = 0;
	//Check if linked list is empty
	if(list -> head) {
		//List is not empty
		list -> tail -> next = n;
		list -> tail = n;
	}
	else {
		//List is empty
		list -> head = n;
		list -> tail = n;
	}
}

//Precondition: A char array with a given length, not necessarily a //C-string but containing only letters of the alphabet
//Postcondition: The address of a new LinkedList containing all the //characters of the input array in the same order, where each node of //the linked list contains one character of the array.             
LinkedList* arrayToLinkedList(char* arr, int len) {
	LinkedList* list = new LinkedList;

	for(int i = 0; i < len; i++) {
		addToEndOfList(list, arr[i]);
	}

	// //Create first node
	// if(len > 0) {
	// 	Node* n = new Node;
	// 	n -> data = arr[0];
	// 	n -> next = 0;
	// 	list -> head = n;
	// 	list -> tail = n;
	// }

	// //Create all other nodes
	// for(int i = 1; i < len; i++) {
	// 	Node* n = new Node;
	// 	n -> data = arr[i];
	// 	n -> next = 0;
	// 	list -> tail -> next = n;
	// 	list -> tail = n;
	// }

	return list;
}

//Precondition: The address of a valid LinkedList and a char value //that is an alphabet in either lower or upper case
//Postcondition: Returns the number of occurrences of the given //alphabet in either lower or upper case in the linked list
//You must use an iterative implementation (loops).
int countCharIterative(LinkedList* list, char value) {
	Node* next = list -> head;
	int count = 0;

	while(next) {
		if(tolower(next -> data) == tolower(value)) {
			count++;
		}
		next = next -> next;
	}
	return count;
}

//Precondition: The address of the first node in a linked list and a //char value that is a letter of the alphabet in either lower or upper //case.
//Postcondition: Returns the number of occurrences of the given char // value in the linked list using a recursive implementation.  
int countCharHelper(Node* head, char value) {
	if(!(head -> next)) {
		//Last node in list
		if(head -> data == tolower(value)) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else {
		if(head -> data == tolower(value)) {
			return 1 + countCharHelper(head -> next, value);
		}
		else {
			return countCharHelper(head -> next, value);
		}
	}
}

//Precondition: The address of a valid LinkedList and a char value  
//that is a letter of the alphabet
//Postcondition: Returns the number of occurrences of the given 
//value in the linked list in either upper or lower case. This //function uses the helper function countCharHelper()
int countChar(LinkedList* list, char value) {
	assert(list);
	return countCharHelper(list->head, value);
}

//Strings Reference
//Char array or array of chars
char arr[] = {'J','i','l','l'};

//C-string
char arr2[] = {'J','i','l','l','\0'};
char arr3[] = "Jill"; //automatically inserts 0 char at end

//The C++ string class methods
string fruit = "Apple";
int len = fruit.length(); //5
int pos = fruit.find('l'); //3
string part = fruit.substr(1,3); //get 3 characters starting at position 1, "ppl"
fruit.erase(2,3); //remove 3 characters starting at position 2, "Ap"
fruit.insert(2, "ricot"); //"Apricot"
friot.replace(2,5,"ple"); //"Apple"

//Check out cctype for checks and conversions on characters
fruit[0].tolower(fruit[0]);
isalpha(fruit[0]); //Checks for a-z, not case sensitive
isalnum(fruit[0]); //Checks for a-z and 0-9, not case sensitive