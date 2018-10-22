#include<iostream>
using namespace std;

// Node declaration
struct node
{
	int data;
	node *next;
};
struct node *head;

// Creation of node
void createNode(int n)
{
  head = NULL;
  node *temp = new node;
  temp->data = n;
  temp->next = NULL;
  head = temp;
}

// Insertion at Begining
void insertBig(int n)
{
 node *temp = new node;
 temp->data = n;
 temp->next = head;
 head = temp;	
}

// Insertion at end
void insertEnd(int n)
{
	node *temp = new node;
	temp->data = n;
	node *p;
	p = head;
	while(p->next!= NULL)
	{
		p = p->next;
	}
	temp->next = NULL;
	p->next = temp;
}

// Insertion at Nth position
void insertionPos(int n,int pos)
{
	node *temp = new node;
	temp->data = n;
	node *p;
	p = head;
	if(pos==1)
	{
		temp->next = head;
		head = temp;
	}
	else
	{
		for(int i=1;i<pos-1&&p!=NULL;i++)
		{
			p = p->next;
		}
		temp->next = p->next;
		p->next = temp;
	}
}
// Display list
void display()
{
	node *p;
	p = head;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}


// Main body
int main()
{
	cout<<"linked List:-"<<endl;
	createNode(4);
	insertBig(2);
	insertEnd(6);
	insertionPos(8,3);
	display();
	
	return 0;
}
