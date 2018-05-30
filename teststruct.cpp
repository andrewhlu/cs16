#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};

struct LinkedList {
  Node *head;
  Node *tail;
};

int main() {
	LinkedList *list = new LinkedList;
	cout << list << endl;
	list += 1;
	cout << list << endl;
}