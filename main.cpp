
#include "stack.h"

int main(){
	Stack s;
	s.push(5);
	s.push(6);
	s.push(1);

	int poped_ele=s.pop();
	std::cout<<poped_ele;
	int top1=s.top();
	std::cout<<top1;
}