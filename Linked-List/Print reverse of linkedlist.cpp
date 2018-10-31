#include<iostream>
using namespace std;

// // Node declaration
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

// Reverse of linked-list
void printReverse(struct node* head)
{
  if(head == NULL)
  {
  	return ;
  }
  else
  {
  	printReverse(head->next);
  }
  cout<<head->data<<endl;
	
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
	insertBig(6);
	insertBig(8);
	display();
	cout<<"Reverse of Linked list:-"<<endl;
	printReverse(head);
	return 0;
}
