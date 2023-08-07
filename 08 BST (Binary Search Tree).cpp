// Binary search Tree : 
//points for binary dearch tree: 
//inorder travesing  must be accending order 
//left sub tree lesser then parent 
//right sub tree greater then parent
//        10
//       / \
//       7  12
//          / \
//         11  15
//above example of binary search tree 
#include <iostream>
using namespace std;
struct node {
	int data;
	node * left ;
	node *right;
};
//creating function for create tree :
node * createnode (int key)
{
	node * newnode = new node;
	newnode->data= key;
	newnode->left= NULL;
	newnode->right= NULL;
	return newnode;
}

//case1 : traversing inorder 
void inorder (node*root)
{
	if (root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

//case 2 : searching in BST

void search (node * root ,int key)
{
	if (root==NULL)
	{
		cout<<"element not found";
	}
	
	else if (root->data==key)
	{
		cout<<" element is found :   " <<root->data;
	}
	else if (key <root->data)
	{
		search(root->left,key);
	}
	else 
	{
		search(root->right, key);
	}
	
	}

//case 3: insetion in BST
void isert(node * root , int key )
{
   node * p = NULL;
    
    while (root!=NULL)
    {
    	p = root;
    	
    	if (key==root->data)
    	{
    		cout<<"already exist";
		}
		else if (key<root->data)
		{
			root = root->left;
		}
		else {
			root = root->right;
			
		}		
	}
		 node * newnode = createnode(key);
		 if (key<p->data)
		 {
		 	p->left = newnode;
		 }
		 else {
		 	p->right= newnode;
		 }
}



	

int main ()
{
	node * root = createnode(10); 
	node * child1 = createnode(7);
	node * child2 = createnode(12);
	node * child3 = createnode(11);
	node * child4 = createnode(15);
//	node * child5 = createnode(5);
	
	root->left = child1;
	root->right= child2;
	
	child2->left = child3;
	child2->right= child4;
//	inorder(root);	
	
//  search(root,11);
	isert(root,55);
//	search(root,55);

	inorder(root);	
	isert(root,1);
	cout<<endl;
	inorder(root);

}
