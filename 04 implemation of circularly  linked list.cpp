#include <iostream>
using namespace std;
struct node {
	int data;
	node *next;
};

void traversal (node *head)
{
	node *ptr = head;
		cout<<ptr->data<<" ";
		ptr= ptr->next;
	while (ptr!= head)
	{
		cout<<ptr->data<<" ";
		ptr= ptr->next;
	}
	
}

//case 1 : insert at the first

node *first (node *head, int val)
{
	node *newnode = new node;
	newnode->data= val;
	node *ptr2 = head->next;
	while (ptr2->next!= head)
	{
		ptr2= ptr2->next;
	}
	ptr2->next = newnode;
	newnode->next = head;
	head= newnode;
	return head;
	
}
int main ()
{
	node * head;
	node *node1 = new node;
	node *node2 = new node;
	node *node3 = new node;
	node *node4 = new node;
	node *node5 = new node;
	
	node1->data= 3;
	node2->data = 4;
	node3->data= 5;
	node4->data= 6;
	node5->data= 9;
	
	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next=  node4;
	node4->next = node5;
	node5->next = head;
//	traversal(head);
	head = first(head,555);
	head = first(head,56);
	traversal(head);
	
	
}
