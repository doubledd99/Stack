#include "Stack.h"

Stack::Stack() {

}

Stack::~Stack()
{
}

bool Stack::isEmpty()
{
	if(head==nullptr)
		return true;
	else
		return false;
}

itemNode* Stack::top()
{
	return head;
}

void Stack::push(itemType info)
{
	if (true) {
		itemNode* newNode;
		newNode = new itemNode;
		newNode->next = head;
		head = newNode;
		newNode->info = info;
	}
	length++;
}

void Stack::pop()
{
	if (length >= 2) {
		itemNode* newNode = head;
		head->info = head->next->info;
		head->next = head->next->next;
		length--;
	}

}
