#include "split.h"
#include <iostream>
#include <cstddef>
using namespace std;


int main() {


  Node* head = NULL;
  Node* second = NULL;
  Node* third = NULL;
  Node* tail = NULL;

  tail = new Node (3, NULL);
  third = new Node (2, tail);
  second = new Node (1, third);
  head = new Node (0, second);

  // head->value = 0;
  // head->next = second;

  // second->value = 1;
  // second->next = third;

  // third->value = 2;
  // third->next = tail;

  // tail->value = 3;
  // tail->next = NULL;

  Node* evens = NULL;
  Node* odds = NULL; 
split(head, odds, evens);

Node* temp;
temp = evens;
while (temp != NULL){
  cout << temp->value << endl;
  temp = temp->next;
}
Node* temp2;
temp2 = odds;
while (temp2 != NULL) {
  cout << temp2->value << endl;
  temp2 = temp2->next;
}

// cout << evens->value << endl;
// cout << evens->next->value << endl;
// cout << odds->value << endl;
// cout << odds->next->value << endl;

delete head;
delete second;
delete third;
delete tail;

}