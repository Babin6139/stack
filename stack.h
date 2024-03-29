#ifndef STACK_H
#define STACK_H
#define MAX_STACK_SIZE 100
class Stack{
	public:
		Stack();
		~Stack();
		void push(int element);
		int pop();
		int top();
		bool isEmpty();
	private:
		int elements[MAX_STACK_SIZE];
		int top;

};
#endif