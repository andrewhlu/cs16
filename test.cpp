#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include <cassert>
#include <sstream>
using namespace std;

struct Node {
  char data;
  Node *next;
};

struct LinkedList {
  Node *head;
  Node *tail;
};

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


//Test function (from lab08)
std::string charToString(char i) {
// creates a stream like cout, cerr that writes to a string
  std::ostringstream oss; 
  oss << i;
  return oss.str(); // return the string result
}

string linkedListToString(LinkedList *list) {
  string result="";
  for(const Node* p=list->head; p!=NULL; p=p->next) {
    result += "[" + charToString(p->data) + "]->";
  }
  result += "null";
  return result;
}

//Written code
int main() {
	LinkedList* list = new LinkedList;
	list -> head = 0;
	list -> tail = 0;
	addToEndOfList(list, 'a');
	cout << linkedListToString(list) << endl;

	char arr[] = "Mississippi";
	LinkedList* arrToList = arrayToLinkedList(arr, 11);
	cout << linkedListToString(arrToList) << endl;
	cout << countCharIterative(arrToList, 's') << endl;
	cout << countChar(arrToList, 'i') << endl;
}
