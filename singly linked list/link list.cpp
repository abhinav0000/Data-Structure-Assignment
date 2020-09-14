#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *next;
};

void display(node *start)
{
	node *ptr;
	ptr=start;
	
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
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
	}
	return start;
}

int main()
{
	node *start;
	int n;
	
	cout<<"enter number of nodes you want"<<endl;
	cin>>n;
	start=makelist(n);
	
	display(start);
	
}
