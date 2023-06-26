#include <iostream>
#include "BinaryTree.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BinaryTree bin;
	
	bin.insertNode(100);
	bin.insertNode(75);
	bin.insertNode(65);
	bin.insertNode(14);
	bin.insertNode(94);
	bin.insertNode(43);
	bin.insertNode(25);
	bin.insertNode(32); 
	
	bin.inOrder();
	cout << endl;
	bin.preOrder();
	cout << endl;
	bin.postOrder();
	cout << endl; 
	return 0;
}