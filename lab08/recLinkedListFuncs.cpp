#include "linkedList.h"
#include "linkedListFuncs.h"

//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
  if(!(head)) {
    return 0;
  }
  else if(!(head->next)) {
    return head->data;
  }
  else {
    return head->data + recursiveSum(head->next);
  }
}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
  if(!(head->next)) {
    return head->data;
  }

  int largestOfRest = recursiveLargestValue(head->next);

  if(head->data > largestOfRest) {
    return head->data;
  }
  else {
    return largestOfRest;
  }
}
