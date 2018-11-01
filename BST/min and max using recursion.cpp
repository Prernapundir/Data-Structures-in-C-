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

// Maximum element using recursive method
int findMax(node* root)
{
	node* current = root;
	if(root==NULL){
		return 1;
	}
	else if(current->right==NULL)
	{
		return root->data;
	}
    return findMax(root->right);
}
// Minimum element using recursive method
int findMin(node* root)
{
	node* current = root;
	if(root==NULL){
		return 1;
	}
	else if(current->left==NULL)
	{
		return root->data;
	}
    return findMin(root->left);
}



// Main body
int main()
{
	root = NULL;
	root = insert(root,15);
	root = insert(root,10);
	root = insert(root,30);
	root = insert(root,55);
	root = insert(root,25);
	root = insert(root,5);
	root = insert(root,20);
     cout<<"Minimum Element:-\n"<<findMin(root);
    cout<<"\nMaximum Element:-\n"<<findMax(root);
	return 0 ;
}
