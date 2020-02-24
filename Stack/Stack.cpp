/*
Mason Henry
Data structures
Due: 2/28/20
Create and test a stack.
*/
#include "Stack.h"
#include <new>

//Sets the values when constructed
Stack::Stack()
{
	length = 0;
	head = nullptr;
}

Stack::~Stack()
{
	//While the stack has items it deletes them.
	while (length != 0)
		Pop();
}

bool Stack::IsEmpty()
{
	//Checks the length of the stack. If the length is zero returns true otherwise false.
	if (length == 0)
		return true;
	else
		return false;
}

bool Stack::IsFull()
{
	//creates a node called loc
	node* loc;
	//tries to create a new node. If it can returns false. If it can't it returns true.
	try
	{
		loc = new node;
		delete loc;
		return false;
	}
	catch(std::bad_alloc& exception)
	{
		return true;
	}
}

void Stack::Push(ItemType value)
{
	if (IsFull() == false)
	{
		//creates a node called loc and creates a new node. 
		node* loc;
		loc = new node;
		//Sets the loc info equal to the value and the next pointer equal to the header.
		loc->info = value;
		loc->next = head;
		//moves the head to the top of the stack.
		head = loc;

		length++;
	}
}

void Stack::Pop()
{
	if (IsEmpty() == false)
	{
		//creates a node called loc and sets it equal to head.
		node* loc = head;
		//moves head to the next spot
		head = head->next;
		//deletes the top node.
		delete loc;
		length--;
	}
}

ItemType Stack::Top()
{
	//if it is not empty returns value on top otherwise returns null.
	if (IsEmpty() == false)
		return head->info;
	else
		return NULL;
}
