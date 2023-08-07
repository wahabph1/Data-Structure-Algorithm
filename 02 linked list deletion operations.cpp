#include <iostream>
#include <windows.h>
using namespace std;
struct node {
	int data;
	node *next;
};

//case 1: delete first node :

node *deletefirst(node *head)
{
	node *ptr = head;
	head  = head->next;
    free(ptr);
    return head;
    
}

//case 2 : deletelastnode  

node *deletelast (node *head)

{
	node *ptr = head;
	node *ptr2 = head->next;
	
	while (ptr2->next!= NULL)
	{
		ptr = ptr->next;
		ptr2 = ptr->next;
	}
	ptr->next = ptr2->next;
	free(ptr2);
	return head;
}


//case3 : delete the node in between the index :

node *deleteindex(node *head, int index)

{
	int i=0;
	node *ptr = head;
	node *ptr2 = head->next;
	while (i!=index-1)
	{
		ptr = ptr->next;
		ptr2= ptr2->next;
		i++;
	}
	ptr->next = ptr2->next;
	free(ptr2);
	return head;
}

//case4 delete the node of given value :

node *deleteval (node *head,  int val)
{
	node *ptr= head;
	node *ptr2= head->next;
	
		while (ptr2->data!=val)
	{
		ptr= ptr->next;
		ptr2 = ptr2->next;
		
	}
	ptr->next= ptr2->next;
	free (ptr2);
	return head;
	}



	
	



void traversal (node *head)
{
	node *ptr = head;
	while (ptr!= NULL)
	{
		cout<<ptr->data<<" ";
		ptr = ptr->next;	
	}
}
int main ()
{
	node * head;
	node * node1 = new node;node * node2 = new node;node * node3 = new node;
	node1->data= 4;node2->data= 6;node3->data= 9;
	head= node1;node1->next= node2;node2->next= node3; node3->next= NULL;
	
	
	cout<<"link list before deletion : \n";
		traversal(head);
			cout<<"\nlink list after deletion : \n";
			//head= deletefirst(head);
			

			
		head = deleteval(head,9);
			
			traversal(head);

	
}
