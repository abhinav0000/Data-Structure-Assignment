#include<iostream>
#include<stdlib.h>
//circular linked listt
using namespace std;

class node
{
	public:
	int data;
	node *next;
};

void display(node *start)
{	
	cout<<"\nThe list is:"<<endl;
	node *ptr;
	ptr=start;
	
	while(ptr->next!=start)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl;
	
}

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
		
		if(i == n-1)
		{
			ptr1->next=start;
			
		}
	}
	
	return start;
}

node* ins_beg(node *start)			//function of insertion at beginning
{
	node *ptr,*tail;
	
	tail=start;
	
	while(tail->next!=start)
	{
		tail=tail->next;
	}
	
	ptr=new node();
	cout<<"enter data in new node"<<endl;
	cin>>ptr->data;
	
	ptr->next=tail->next;
	tail->next=ptr;
	
	start=ptr;
	return start;
					
}

void ins_end(node *start)			//func to insert a new a node at end
{
	node *ptr,*tail;
	
	tail=start;
	
	while(tail->next!=start)
	{
		tail=tail->next;
	}
	
	ptr=new node();
	cout<<"enter data in new node"<<endl;
	cin>>ptr->data;
	
	ptr->next=tail->next;
	tail->next=ptr;
	tail=ptr;
	
	display(start);
	
}

node* ins_mid(node *start, int n, int pos)			//func to insert at mid
{
	node *tail;
	tail=start;

	int i=0;
	if(pos<0 || pos>n)
	{
		cout<<"invalid position"<<endl;
	}

	else if(pos==1)
	{
		start=ins_beg(start);
		return start;
	}
	else
	{
		
		
		
		while(i != pos-2)
		{
		tail=tail->next;
			i++;
		}
		node *ptr;
		ptr=new node();
		cout<<"enter the data in new node"<<endl;
		cin>>ptr->data;
		
		ptr->next=tail->next;
		tail->next=ptr;
		
		
	}
	return start;
	
}

//deletion starts here

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

node* deletione(node *start)		//function for deletion in end
{
	node *ptr,*temp,*tail;
	
	tail=start;
	
	while(tail->next!=start)
	{
		tail=tail->next;
	}
	temp=tail->next;
	
	while(temp->next != tail->next)
	{
		ptr=temp;
		temp=temp->next;	
	}
	ptr->next=temp->next;
	tail=ptr;
	free(temp);
	
	return start;
}


node* deletionb(node *start)		//functon for deletion in beginning
{
	node *temp,*tail;
	tail=start;
	
	while(tail->next!=start)
	{
		tail=tail->next;
	}
	temp=start;
	tail->next=start->next;
	start=start->next;
	temp->next=NULL;
	free(temp);
	return start;
	
}

//searching 
int searchn(node *start, int item)
{
	node *ptr=NULL;
	ptr=start;
	int count=0;
	while(ptr->next!=start)
	{	
		count=count+1;
		if(ptr->data==item)
		{
			return count;
		}
		else
		{
			ptr=ptr->next;
		}
	}
	
}


int main()
{
	node *start,*loc;
	int n,i,num,j,k,num_search,ser_ching;
	
	cout<<"enter number of nodes you want"<<endl;
	cin>>n;
	
	start=makelist(n);
	display(start);
	
	again:
	cout<<"what you want to do \ninsertion: type 1\ndeletion: type 2\nsearching: type 3"<<endl;
	cin>>k;
	
if(k==1)	
	{
	back_ins:
	cout<<"enter where you want to insert? 1 for beginning, 2 for end, 3 for mid"<<endl;
	cin>>i;
	
	if(i==1)
	{
	
	start=ins_beg(start);
	display(start);
	
	}
	else if(i==2)
	{
	ins_end(start);
	}

	else if(i==3)
	{
	int pos;
	cout<<"enter the position you want to add a new node"<<endl;
	cin>>pos;
	start=ins_mid(start,n,pos);
	display(start);
	}
	else
	{
		cout<<"please enter from 1, 2, and 3"<<endl;
		goto back_ins;
	}
}
	//deletion
	else if(k==2)
	{
	back_del:
	cout<<"enter what you want to do: 1 for deletion in between, 2 for deletion in end, 3 for deletion in beginning"<<endl;
	cin>>j;
	
	if(j==1)
	{
	cout<<"enter the data you want to delete: "<<endl;
	cin>>num;
	
	loc=searching(start,num);	//for searching the node 
	deletioni(start,loc);		//deletion in between
	display(start);	
	}
	else if(j==2)
	{start=deletione(start);		//deletion in end
	display(start);}
	
	else if(j==3)
	{start=deletionb(start);		//deletion in beginning
	display(start);}
	
	else
	{
		cout<<"please enter from 1, 2, and 3 only: "<<endl;
		goto back_del;
	}
}

else if(k==3)
{
	cout<<endl<<"enter which number's location you want to find"<<endl;
	cin>>num_search;
	
	ser_ching=searchn(start, num_search);
	
	cout<<"required data is at "<<ser_ching<<"th loction in linked list";
}

else
{
	cout<<"please enter only 1 or 2: "<<endl;
	goto again;
}


	
}
