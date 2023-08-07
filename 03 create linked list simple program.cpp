#include <iostream>
using namespace std;
class A {
	public:
	int data ;
	A *next;
	A(int d)
	{
		data = d;
	}
};
int main ()
{
	A*node1 = new A(3);
	A*node2 = new A(4);
	A*node3 = new A(5);
	A*node4 = new A(6);
	
	A *head = node1;
	head->next = node2;
	node2->next= node3;
	node3->next = node4;
	node4->next = NULL;
   



}
	
	
	
	 
	

