// Binary Tree
#include <iostream>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};

//case 1 : function of create node 
node * createnode (int key)
{
	node * newnode = new node;
	newnode->data= key;
	newnode->left= NULL;
	newnode->right = NULL;
	
	return newnode;
	
	
	
}

//Travesring in binary tree:
//case 1 :  pre order traversing

void preorder (node * root )
{
	if (root!=NULL)
	{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
		
		
	}
}

//case 2 : post order traversing 
void postorder (node * root)
{
	if (root!= NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
}

//case 3: inorder travesing function
void inorder (node * root )
{
	if (root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
int main ()
{
    node * root = createnode(4);
    node *child1 = createnode(5);
    node *child2 = createnode(6);
    node *child3 = createnode(7);
    node *child4 = createnode(8);
    node *child5 = createnode(9);
	root->left= child1;
	root->right= child2;
	child1->left= child3;
	child1->right= child4;
	child2->left= child5;
     cout<<"preorder of the tree\n";
	preorder(root);
	cout<<"\npost order of the tree \n";
	postorder(root);
  cout<<"\ninorder of the tree \n";
  inorder(root);

//        4
//       / \
//       5  6
//      /\  /
//     7 8  9 
//above code of that root:

	

	



	  
	
}
