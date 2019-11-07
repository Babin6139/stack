#include<iostream>
#include "stack.h"

Stack::Stack(){
	top=-1;
}
Stack::~Stack(){}
void Stack:push(int element){
	if(top >= MAX_STACK_SIZE){
		std::cout<<"Cannot push"<<element<<".Stack";
	}
	else{
		top++;
		this->elements[top] =element;
	}
}
int Stack::pop(){
	if(top<0){
		std::cout<<"cannot pop an element from an empty stack";
	}
	else{
		return elements[top--];
	}
}
bool Stack::isEmpty(){
	return top<0;
}
int Stack::top(){
	if(!isEmpty())
	{
		int val=elements[top];
		return val;
	}
	else{
		return -1;
	}
}
