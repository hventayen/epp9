// ADD ANSWER TO THIS FILE

#include "CharLinkedList.h"

bool CharLinkedList::checkList() {
  // COMPLETE THIS FOR PROBLEM 2
  return true;// dummy value to stop warnings while doing Problem 3. Remove this line.

}

bool CharLinkedList::checkRecurse (SNode *ptr) {
  // COMPLETE THIS FOR PROBLEM 3
  return true;// dummy value to stop warnings while doing Problem 2. Remove this line.

}

void CharLinkedList::addFront(char x) {
  SNode *tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
}

// recursion helper function called from main for PROBLEM 3
bool CharLinkedList::checkRecurseHelper () {
  return checkRecurse(head);
}
