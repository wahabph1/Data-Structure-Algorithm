#include <iostream>
#include <windows.h>
using namespace std;
struct node {
	int data;
	node * next;
};


	
// traversing :	
void display (node * head)
{
	node * ptr= head;
	while (ptr!= NULL)
	{
		int c;
		c++;
		
		cout<<"displaying element number "<<c << ": " <<ptr->data<<"\n";
		ptr= ptr->next;
	}
	
}
// case 1 delete first element from the linked list :
node*delet(node *head )
{
	node * ptr= head;
	head= head->next;
	free(ptr);
	return head;
}


// case 2 delete last node 
node *deletend(node*head)
{
	int i=1;
	node * ptr= head;
	node *ptr2 = head->next;
	while(ptr2->next!=NULL)
	{
		ptr = ptr->next;
		ptr2= ptr2->next;
	}
	ptr->next= ptr2->next;
	free(ptr2);
	
	return head;
}


// case 3 delete node of index:
node *deletend(node*head,int index)
{
	int i=1;
	node * ptr= head;
	node *ptr2 = head->next;
	while (i!=index-1)
	{
		ptr= ptr->next;
		ptr2= ptr2->next;
		i++;
	}
	ptr->next= ptr2->next;
	free(ptr2);
	return head;
	
	
}
// case 4 delete node of given value "
node *deletgiven(node*head,int val)
{
	int i=1;
	node * ptr= head;
	node *ptr2 = head->next;
	while (ptr2->data!=val)
	{
		ptr= ptr->next;
		ptr2= ptr2->next;
	}
	ptr->next= ptr2->next;
	free(ptr2);
	return head;
	
	
}
// 

int main ()
{
	node * head;
	
	node * node1 = new node;node * node2 = new node;node * node3 = new node;
	node1->data= 4;node2->data= 6;node3->data= 9;
	head= node1;node1->next= node2;node2->next= node3; node3->next= NULL;
	cout<<"linked list before deletion :\n\n";
	display(head);
	cout<<"\n\n\n";
	cout<<"linked list after deletion :\n\n";
//      	head = delet(head);
	//	head = delet(head);
	//	head = delet(head);
//		display(head);
	head = deletend(head);
//		display(head);
//		head = deletend(head,3);
//		display(head);
//	
//head = deletgiven(head,6);
		display(head);
		
}
