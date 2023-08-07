#include <iostream>
using namespace std;
struct node {
	
	int data;
	node *next;
	node *prev;
};

void traversal (node *head)
{
	node *ptr= head;
	while (ptr!=NULL){
		
	cout<<ptr->data<<" ";
	ptr= ptr->next;

	
	
	
}




}
void reverse (node *head)
{
node *ptr2= head;
while (ptr2!= NULL)
{
	cout<<ptr2->data;
	ptr2 = ptr2->next;
	
	if (ptr2->next=NULL)
	{
		{
		while (ptr2!=NULL)
		cout<<ptr2->data;
		ptr2 = ptr2->prev;
	}
		
		}
	
	}
	
	

}

	

int main ()
{
	node *head;
	node *node1 = new node;	
	node *node2= new node;
	node *node3= new node;
	
	
	head= node1;
	node1->next = node2;
	node1->prev= NULL;
	
	node2->next = node3;
	node2->prev = node1;
	
	node3->next = NULL;
	node3->prev = node2;
	
	node1->data= 3;
	node2->data= 4;
	node3->data= 5;
	
//	traversal(head);
//	cout<<"reverse operation \n";
	reverse (head);
}

