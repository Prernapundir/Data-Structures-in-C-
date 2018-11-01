#include<iostream>
using namespace std;

// Declaration of node
struct node
{
	int data;
	node* left;
	node* right;
};
struct node* root;

// Creation of node
node* createNode(int data)
{
	node* temp = new node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

// Insertion of node

 node* insert(struct node* root,int data)
{
	if(root==NULL)
	{
		root = createNode(data);
		return root;
	}
	else if(data<=root->data)
	{
		root->left = insert(root->left,data);
	}
	else
	{
		root->right = insert(root->right,data);
	}
	return root;
}

// Returns true if the given tree is bst
bool IsBSTUtil(node* root, int min, int max)
{
	// an empty tree
	if(root == NULL)  
	   return true;
	  
	 // false if violates the condition of max and min 
	if(root->data < min || root->data > max )	
		return false;
	
	// otherwise check recursively the subtrees
	
	return
	IsBSTUtil(root->left,min,root->data) &&
	IsBSTUtil(root->right,root->data,max);
}

// Check bst or not
int IsBST(node* root)
{
	return IsBSTUtil(root,INT_MIN,INT_MAX);
	
}

// Driver program to test above functions
int main()
{
	root = NULL;
	root = insert(root,5);
	root = insert(root,15);
	root = insert(root,15);
	root = insert(root,10);
	root = insert(root,40);
    if(IsBST(root))
    {
    	cout<<"Is bst";
	}
	else
	{
		cout<<"Not a bst";
	}
	return 0 ;
}
