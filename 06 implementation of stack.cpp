#include <iostream>
using namespace std;
struct stack {
	int top;
	int size;
	int *arr;
};
//case 1: push operation
void *push (stack *s , int val)
{
	s->top++;
	s->arr[s->top]= val;
	
}
 void display (stack *s)
 {
 	for (int i=0; i<=s->top; i++)
 	{
 		cout<<"element at index "<<i<<" : "<<s->arr[i]<<"\n";
	 }
 }



//case 2 : pop operation :

int pop (stack *s)
{
	int x = s->arr[s->top];
	s->top--;
	return x;
}

//case3 : check stack is empty
int empty(stack *s)
{
	if (s->top==-1)
	{
		return 1;
	}
	else {
		return 0;
			}
			
}

int main ()
{
	
	stack *s = new stack;
	s->top= -1;
	s->size= 10;
	s->arr = new int [s->size];
	
	push (s,100);
	push (s,200);
	push (s,300);
	push (s,400);
	push (s,500);
	display(s);
	cout<<"\ngoing to the pop element is : "<<pop(s)<<"\n";	display(s);
	
				
	
				
	
	
}





