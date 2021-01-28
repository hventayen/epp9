//
// EDIT THIS FILE ONLY FOR YOUR OWN TESTING
// WRITE YOUR CODE IN IntegerLinkedList.cpp
//

#include <iostream>
#include <string>
#include "CharLinkedList.h"

using std::string;
using std::cout;
using std::endl;
bool checkAnswer(const string &nameOfTest, bool received, bool expected);

int main() {
  cout << "Test if the linked list contains a DNA sequence" << endl;
  {
    CharLinkedList mylist;
    mylist.addFront('C');
    mylist.addFront('G');
    mylist.addFront('C');
    mylist.addFront('C');
    mylist.addFront('T');
    mylist.addFront('A');
    mylist.addFront('A');
  	string s = "List: A -> A -> T -> C -> C -> G -> C";
	  checkAnswer(s, mylist.checkList(), true);
  }
  {
    CharLinkedList mylist;
    mylist.addFront('c');
    mylist.addFront('t');
    mylist.addFront('t');
    mylist.addFront('a');
    mylist.addFront('g');
  	string s = "List: g -> a -> t -> t -> c";
	  checkAnswer(s, mylist.checkList(), false);
  }
  {
    CharLinkedList mylist;
    mylist.addFront('T');
  	string s = "List: T";
	  checkAnswer(s, mylist.checkList(), true);
  }
  {
    CharLinkedList mylist;
    mylist.addFront('d');
    mylist.addFront('C');
    mylist.addFront('G');
    mylist.addFront('C');
    mylist.addFront('C');
    mylist.addFront('T');
    mylist.addFront('A');
    mylist.addFront('A');
  	string s = "List: A -> A -> T -> C -> C -> G -> C -> d";
	  checkAnswer(s, mylist.checkList(), false);
  }
  {
    CharLinkedList mylist;
    mylist.addFront('C');
    mylist.addFront('G');
    mylist.addFront('C');
    mylist.addFront('C');
    mylist.addFront('T');
    mylist.addFront('A');
    mylist.addFront('A');
    mylist.addFront('d');
  	string s = "List: d -> A -> A -> T -> C -> C -> G -> C";
	  checkAnswer(s, mylist.checkList(), false);
  }
  {
    CharLinkedList mylist;
    mylist.addFront('d');
  	string s = "List: d";
	  checkAnswer(s, mylist.checkList(), false);
  }
}

bool checkAnswer(const string &nameOfTest, bool received, bool expected) {
    if (received == expected) {
        cout << std::boolalpha << "PASSED " << nameOfTest << ": expected and received " << received << endl;
        return true;
    }
    cout << std::boolalpha << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << endl;
    return false;
}
