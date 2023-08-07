#include <iostream>
using namespace std;
struct node {
	int data;
    node * next;
};
void traversal (node *head)
{
	node *ptr = head;
	while (ptr!= NULL)
	{
		cout<<ptr->data<<" ";
		ptr = ptr->next;	
	}
}

//case1 = insertion in the begining of the linked list

node *inserfirst(node *head,int info)
{
      node *newnode = new node;
      newnode->data= info;
      newnode->next= head;
      head= newnode;
}


//case2 : insertion at  the end of the linked list 

node *insertend (node *head, int info)
{
	node*ptr = head;
	node *newnode = new node ;
	newnode->data= info;
	
	while (ptr->next!=NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = newnode;
	newnode->next = NULL;
	return head;
	
	
}


//case3 : insert between operation


node *insertbetween(node *head, int  info,int index)
{
	node *newnode = new node;
	node *ptr = head;

   for (int i=0; i<index-1; i++)
   {
   	ptr= ptr->next;
   }
   	newnode->data= info;
   	newnode->next= ptr->next;
	ptr->next= newnode;
	return head;
}


//case4 : insert element after givent index




node *bet(node *head, int  info,int index)
{
	int i=0;
	node *newnode = new node;
	node *ptr = head;
	newnode->data= info;
	
	while (i<index-1)
	{
		ptr = ptr->next;
		i++;
	}
	newnode->next = ptr->next;
	ptr->next= newnode;
	return head;
	
	
	
	
}








int main ()
{
	node *head;
	node * node1 =  new node;
	node * node2 =  new node;
	node * node3 =  new node;
	node * node4 =  new node;
	
	
	node1->data=3;
	node2->data=6;
	node3->data=9;
	node4->data=21;
	
	head= node1;
	node1->next= node2;
	node2->next= node3;
	node3->next= node4;
	node4->next= NULL;
	
	cout<<"before inseertion \n";
	traversal(head);
	
	cout<<"\nafter insertion \n";
	head = inserfirst(head,33);
	traversal(head);
	
	cout<<"\ninserting element end of the linked list : \n";
	
	head = insertend(head,2);
	traversal(head);
	
	
	
	cout<<"\ninserting element end of the linked list : \n";
	
	head = insertend(head,28);
	traversal(head);
	
	cout<<"\ninserting element in between nodes : \n";
	
	head = insertbetween(head,255,5);
	traversal(head);
	
	
	cout<<"\ninserting element in between nodes : \n";
	
	head = bet(head,10,2);
	traversal(head);
	
	
	
	
	

}

