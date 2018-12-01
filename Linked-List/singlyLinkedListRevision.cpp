#include<iostream>
using namespace std;

/* Node declaration */
struct node
{
	int data;
	node* next;
};
 node* head = NULL;

/* Creation of node */
void createNode(int n)
{
	node* temp = new node;
	temp->data = n;
	temp->next = NULL;
	head = temp;
}


/* Insertion at begining */ 
void insertBig(int n)
{
	node* temp = new node;
	temp->data = n;
	temp->next = head;
	head = temp;
}

/* Insertion at end */
void insertEnd(int n)
{
	node* temp = new node;
	node* p = head;
	temp->data = n;
	while(p->next!=NULL)
	{
	  p = p->next;
	}
	p->next = temp;
	temp->next = NULL;
} 

/* Insertion at nth position */
void insertPos(int n, int pos)
{
	node* temp = new node;
	node*p = head;
	temp->data = n;
	if(n==1)
	{
		temp->next = head;
		head = temp;
	}
	else{
		for(int i=1;i<pos-1;i++)
		{
			p = p->next;
		}
		temp->next = p->next;
		p->next = temp;
	}
}

/* Deletion from begining */
void deleteBig()
{
	node* temp;
	temp = head;
	head = head->next;
	delete(temp);
}

/* Deletion from end */
void deleteEnd()
{
	node* temp;
	node* p = head;
	while(p->next!=NULL)
	{
		temp = p;
		p = p->next;
	}
	delete(p);
	temp->next = NULL;
	
}
/* Deletion from nth position */
void deletePos(int pos)
{
	node* temp;
	node* p = head;
	if(pos==1)
	{
	temp = head;
	head = head->next;
	delete(temp);	
	}
	else{
		for(int i=1;i<pos-1;i++)
		{
			p = p->next;
		}
		temp = p->next;
		p->next = temp->next;
		delete(temp);
	}
}
/* Display the linked list */
void display()
{
	node* temp;
	temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

/* Driver program */
int main()
{
	cout<<"Linked List:-\n";
	createNode(4);
	display();
	cout<<"\nInsertion at beginning\n";
	insertBig(2);
	insertBig(1);
	display();
	cout<<"\nInsertion at end\n";
	insertEnd(6);
	display();
    cout<<"\nInsertion at nth position\n";
    insertPos(8,4);
    display();
    cout<<"\nDeletion from beginning\n";
    deleteBig();
    display();
    cout<<"\nDeletion from End\n";
    deleteEnd();
    display();
    cout<<"\nDeletion from nth position\n";
    deletePos(2);
    display();
	return 0;
}
