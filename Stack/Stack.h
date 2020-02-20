#ifndef Stack_h
#define Stack_h

#include <stdlib.h>
#include <iostream>
using namespace std;

typedef int itemType;
struct itemNode
{
	itemType info; 
	itemNode* next; 
};

class Stack {
	int const maxStackSize =400000000;
public:
	Stack();
	~Stack();
	//
	bool isEmpty(); //returns bool true if stack is full
	bool isFull();	
	itemNode* top(); //returns a copy of the top item from the stack

	void push(itemType info); //adds an item on the stack
	void pop(); //removes the top item from the stack
private:
	//
	int length;
	itemNode item;
	itemNode* head;
	
};
#endif