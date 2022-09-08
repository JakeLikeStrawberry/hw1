#include "split.h"
#include <iostream>
#include <cstddef>
using namespace std;


int main() {

  Node* head = NULL;
  Node* second = NULL;
  Node* third = NULL;
  Node* tail = NULL;

  head->value = 0;
  head->next = second;

  second->value = 1;
  second->next = third;

  third->value = 2;
  third->next = tail;

  tail->value = 3;
  tail->next = NULL;

  Node* evens = NULL;
  Node* odds = NULL; 

split(head, odds, evens);

cout << evens->value << endl;
cout << evens->next->value << endl;
cout << odds->value << endl;
cout << odds->next->value << endl;


}