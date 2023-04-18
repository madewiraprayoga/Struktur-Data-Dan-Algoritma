#include <iostream>
#include "Linkedlist.h"
using namespace std;


int main(int argc, char** argv) {
	
	LinkedList list1;
	
	list1.insertToHead(25);
	list1.insertToHead(30);
	list1.insertToHead(45);
	list1.insertToHead(50);
	list1.insertToTail(5);
	list1.insertAfter(30,60);
	
	cout << "head : " << list1.head->value << endl;
	cout << "tail : " << list1.tail->value << endl;
	cout << list1.head->next->next->value << endl;
	cout << list1.head->next->next->value << endl;
	list1.printAll();
	
	
	return 0;
}