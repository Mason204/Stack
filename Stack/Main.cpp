/*
Mason Henry
Data structures
Due: 2/28/20
Create and test a stack.
*/

#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	Stack stack1;

	cout << stack1.IsEmpty() << endl;
	cout << stack1.IsFull() << endl;
	
	stack1.Push(42);
	cout << stack1.Top() << endl;

	stack1.Push(32);
	cout << stack1.Top() << endl;

	stack1.Push(22);
	cout << stack1.Top() << endl;

	cout << stack1.IsEmpty() << endl;
	cout << stack1.IsFull() << endl;

	stack1.Pop();
	cout << stack1.Top() << endl;

	stack1.Pop();
	cout << stack1.Top() << endl;

	stack1.Pop();
	cout << stack1.Top() << endl;

	return 0;
}