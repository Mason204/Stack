/*
Mason Henry
Data structures
Due: 2/28/20
Create and test a stack.
*/
#ifndef STACK_H
#define STACK_H

using namespace std;

typedef int ItemType;

//Sets up the basic node structure.
struct node
{
	//Contains the info in the node.
	ItemType info;
	//pointer that points to the next node.
	node* next;
};

class Stack
{
public:
	//Constructor
	Stack();

	//Destructor
	~Stack();

	//Pre:Stack must have been constructed.
	//Post: Returns 0 if stack is empty. Returns 1 if stack is not empty.
	bool IsEmpty();

	//Pre:Stack must have been constructed.
	//Post:Returns 0 if stack is full. Returns 1 if stack is not full.
	bool IsFull(); 

	//Pre:Stack must have been constructed.
	//Post:Checks if stack is full. If it is not full adds item to top of stack and increases length of list.
	void Push(ItemType value);

	//Pre:Stack must have been constructed.
	//Post:Checks if stack is empty. If stack is not empty removes the top item of stack and decreases list length.
	void Pop();

	//Pre:Stack must have been constructed. 
	//Post:Checks if stack is empty. If it is empty returns NULL. If it is not empty returns item on top.
	ItemType Top();

private:

	node* head;
	int length;

};

#endif
