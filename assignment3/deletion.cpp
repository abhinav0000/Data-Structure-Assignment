#include<iostream>
#include<stdlib.h>
using namespace std;

class node
{
	public:
	int data;
	node *next;
};

void display(node *start)			//function to display a list
{	 
	cout<<"\nThe list is:"<<endl;
	node *ptr;
	ptr=start;
	
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}

node* makelist(int n)				//function to create a new list
{	
	node *ptr1,*ptr2,*start;
	start=NULL;
	
	for(int i=0; i<n; i++)
	{
		ptr1=new node();
		cout<<"enter data"<<endl;
		cin>>ptr1->data;
		ptr1->next=NULL;
		if(start==NULL)
		{
			start=ptr1;
		}
		else
		{
			ptr2=start;
			while(ptr2->next!=NULL)
			{
				ptr2=ptr2->next;
				
			}
			ptr2->next=ptr1;
		}
	}
	return start;
	
}

node* deletionb(node *start)		//functon for deletion in beginning
{
	node *temp;
	temp=start;
	start=start->next;
	temp->next=NULL;
	delete temp;
	return start;
}

node* deletione(node *start)		//function for deletion in end
{
	node *ptr,*preptr;
	ptr=start;
	while(ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	delete ptr;
	return start;
}


node* searching(node *start,int num)		// node searching function
{
	node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		if(ptr->data==num)
		{
			return ptr;
		}
		else
		{
			ptr=ptr->next;
		}
		
	}
	if(ptr==NULL)
	{
		cout<<"sorry given number not found in list"<<endl;
	}
}

node* deletioni(node *start,node *ptr)		//deletion in-between function
{	
	node *preptr;
	preptr=start;
	while(preptr->next!=NULL)
	{
			if(preptr->next==ptr)
			{
				break;
			}
			preptr=preptr->next;
	}
	preptr->next=ptr->next;
	
	ptr->next=NULL;
	delete ptr;
	
	
}

int main()
{
	node *start,*loc;
	int n,s,num;
	
	cout<<"enter number of nodes you want"<<endl;
	cin>>n;
	start=makelist(n);
	display(start);
	
	yoo:
	cout<<"enter from where you want to delete a node? \n 1 for beginning, 2 for end, 3 for in-between : "<<endl;
	cin>>s;
	if(s==1)
	{start=deletionb(start);		//deletion in beginning
	display(start);}
	
	else if(s==2)
	{start=deletione(start);		//deletion in end
	display(start);}
	
	else if(s==3)
	{
	cout<<"enter the data you want to delete: "<<endl;
	cin>>num;
	
	loc=searching(start,num);	//for searching the node 
	deletioni(start,loc);		//deletion in between
	display(start);	}			//display function
	
	else{
		cout<<"please choose from 1, 2 and 3 only:"<<endl;
		system("CLS");
		goto yoo;
	}
	
	
}

