#include<iostream>
using namespace std;

class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList *removeDuplicatesFromLinkedList(LinkedList *head) {
  LinkedList *curr = head;
  LinkedList *nextNode;
  while (curr != NULL){
    nextNode = curr->next;
    while (nextNode != NULL && curr->value == nextNode->value){
        nextNode = nextNode->next;
    }
    curr->next = nextNode;
    curr = nextNode;
  }
  return head;
}
