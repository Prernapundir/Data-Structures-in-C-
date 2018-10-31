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
// Inorder Print
void inOrder(struct node* root)
{
	if(root==NULL){return;}
	inOrder(root->left);
	cout<<" "<<root->data; 
	inOrder(root->right);
}

// Pre- order Print 
void preOrder(struct node* root)
{
	if(root==NULL){return;}
	cout<<" "<<root->data; 
	preOrder(root->left);
	preOrder(root->right);
}

// Post- order Print 
void postOrder(struct node* root)
{
	if(root==NULL){return;}
	postOrder(root->left);
	postOrder(root->right);
	cout<<" "<<root->data; 
}

// Main body
int main()
{
	root = NULL;
	root = insert(root,15);
	root = insert(root,10);
	root = insert(root,30);
	root = insert(root,0);
	root = insert(root,25);
	root = insert(root,5);
	root = insert(root,20);
	cout<<"InOrder of BST:\n";
	inOrder(root);
	cout<<"\n\n PreOrder of BST:\n";
	preOrder(root);
	cout<<"\n\n PostOrder of BST:\n";
	postOrder(root);
	return 0 ;
}
