#include<iostream.h>
#include<conio.h>

struct node
{
	int data;
	node* next;
};

class linkedlist
{
	node* a;

	public:
	linkedlist()
	{
		a=NULL;
	}
	void push(int val)
	{
		if(a==NULL)
		{
			node* head=new node();
			head->data=val;
			head->next=NULL;
			a=head;
		}
		else
		{
			node* temp=new node();
			temp->data=val;
			node* temp1=a;
			temp->next=temp1;
			a=temp;
		}
	}
	void pop()
	{
		node* head=a;
		a=head->next;
		delete(head);
	}
	void print()
	{
		node* temp=a;
		cout<<endl;

		while(temp->next!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<temp->data;
	}
};


/*
	FOR TESTING UNCOMMENT THIS SECTION

void main()
{
	linkedlist l;
	l.push(5);
	l.push(3);
	l.push(1);
	l.push(0);
	l.pop();
	l.print();
	getch();
}
*/