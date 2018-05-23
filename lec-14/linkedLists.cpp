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

void printList(LinkedList* list) {
	if(!list) {
		return;
	}

	Node *p = list -> head;

	while(p) {
		cout << p -> data << " ";
		p = p -> next;
	}
	cout << endl;
}

int sumElements(LinkedList* list) {
	Node* tmp = list -> head;
	int result = 0;
	while(tmp) {
		result += tmp -> data;
		tmp = tmp -> next;
	}
	return result;
}

bool search(LinkedList* list, int value) {
	Node* tmp = list -> head;

	while(tmp) {
		if(tmp -> data == value) {
			return true; //Found it!
		}
		tmp = tmp -> next;
	}
	return false;
}

// void insertIntoSortedList(LinkedList* list, int value) {
// 	Node* p = new Node;
// 	p -> data = value;
// 	p -> next = 0;

// 	if(list -> head == 0) {
// 		//Empty list
// 		list -> head = p;
// 		list -> tail = p;
// 	}
// 	else {
// 		Node* tmp = list -> head;
// 		if(tmp -> data > value) {
// 			p -> next = list -> head;
// 			list -> head = p;
// 		}
// 	}
// }

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
	insertToList(&myList, 5);
	insertToList(&myList, 25);
	insertToList(&myList, 100);
	insertToList(&myList, 50);
	insertToList(&myList, 45);

	printList(&myList);

	cout << sumElements(&myList) << endl;

	cout << search(&myList, 100) << endl;
	cout << search(&myList, -100) << endl;

	//cout << myList.head -> data << endl;
}