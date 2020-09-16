#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *next;
};

//function to display a linked list
void display(node *start)
{
	cout<<"This is the required linked list: "<<endl;
	node *ptr;
	ptr=start;
	
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}

//make a new link list
node* makelist(int n)
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

//code to insert a new node at the beginning
node* insertionb(node *start)
{
	node *ptr;
	ptr=new node();
	cout<<"enter data of a new node"<<endl;
	cin>>ptr->data;
	ptr->next=start;
	start=ptr;
	
	return start;        //returning the address stored by new 'start' pointer to the main's 'start' pointer
}

void insertionw(node *loc)
{	
	node *ptr;
	ptr=new node();
	cout<<"enter data in new node"<<endl;
	cin>>ptr->data;
	
	ptr->next=loc->next;
	loc->next=ptr;
	
	
}


node* searching(node *start,int num)
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

int main()
{
	node *start,*loc;
	int n,num,yes;
	
	cout<<"enter number of nodes you want"<<endl;
	cin>>n;
	start=makelist(n);
	display(start);
	
	again:
	cout<<"where you want to insert the new node?if beginning press 1 if in-between press 2\n";
	cin>>yes;
	
	if(yes==1)
	{	start=insertionb(start);  //function of insertion at beginning 
		display(start);
	}
	else if(yes==2)
	{
		cout<<endl<<"enter number after which you want to insert a new node: "<<endl;
		cin>>num; 
		loc=searching(start,num);
	
	
		insertionw(loc);            //function of insertion in between

		display(start);	
	}
	else
	{
		cout<<"please choose 1 OR 2"<<endl;
		goto again;
	}

		
}
