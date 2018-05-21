#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

struct LinkedList {
	Node* head; //Pointer to the first node
	Node* tail; //Pointer to the last node
};

void insertToList(LinkedList* list, int value) {
	if(list -> head == 0) {
		//Empty list
		Node* p = new Node;
		p -> data = value;
		p -> next = 0;
		list -> head = p;
		list -> tail = p;
	}
	else {
		Node *p = new Node;
		p -> data = value;
		p -> next = list -> head;
		list -> head = p;
	}
}

int main() {
	Node n;
	n.data = 10;
	n.next = 0;

	Node* head = new Node;
	head -> data = 20;
	head -> next = 0;

	LinkedList myList;
	myList.head = 0;
	myList.tail = 0;

	insertToList(&myList, 10);

	cout << myList.head -> data << endl;
}