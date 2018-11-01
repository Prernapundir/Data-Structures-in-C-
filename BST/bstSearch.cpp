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
bool search (node* root, int data)
{
	if(root==NULL)
	{
		return false;
	}
	else if(root->data == data)
	{
		return true;
	}
	else if(data<=root->data)
	{
		return search(root->left,data);
	}
	else
	{
		return search(root->right,data);
	}
}
// Main body
int main()
{
    int n;
	root = NULL;
	root = insert(root,15);
	root = insert(root,10);
	root = insert(root,30);
	root = insert(root,0);
	root = insert(root,25);
	root = insert(root,5);
	root = insert(root,20);
	cout<<"Enter the number u want to search\n";
	cin>>n;
	if(search(root,n)==true)
	{
		cout<<"Found\n";
	}else{
		cout<<"Not Found\n";
	}
	return 0 ;
}
