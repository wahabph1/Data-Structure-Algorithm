#include <iostream>
#include <windows.h>
using namespace std;
struct node {
	int data;
	node *next;
};
node*push(node *top,int info)
{
	node *n= new node;
	n->data=info;
	n->next= top;
	top= n;
	return top;
	}
	

node*pop(node *top )
{
//	node * ptr= top;
	top= top->next;
//	free(ptr);
	return top;
}
	
	
void show(node *top)
{
	node *ptr= top;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
	
}
int main ()
{
	struct node *top= NULL;
	top = push(top,78);
	top = push(top,7);
	top = push(top,9);
	//top = push(top,9);
	show(top);
	top = pop(top);
	cout<<"after\n";
	show(top);
	cout<<endl;
	top = pop(top);
	show(top);
}
