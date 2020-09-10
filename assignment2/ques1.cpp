#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,s,i,j,pos,em,pos2;
	

	
	int arr[50];
		cout<<"enter how many elements you want ?"<<endl;
	cin>>n;
	
	for(i=1;i>0;i++)
	{
	cout<<"enter what you want to do"<<endl;
	cout<<" 1.CREATE \n 2.DISPLAY \n 3.INSERT \n 4.DELETE \n 5.SEARCH \n 6.EXIT"<<endl;
	cin>>s;
	

		switch(s)
		{
			case 1:
				
				for(j=0;j<n;j++)
				{
					cout<<"enter "<<j+1<<"st element"<<endl;
					cin>>arr[j];
				}
				
				
				break;
			case 2:
				
				for(j=0;j<n;j++)
				{	
					cout<<arr[j]<<endl<<flush;
				}
			
				break;
				
			case 3:
				
				cout<<"\n enter the position at which you want to insert a new element"<<endl;
				cin>>pos;
				cout<<"enter the value of the element"<<endl;
				cin>>em;
				for(j=n;j>pos-1;j--)
				{
					arr[j]=arr[j-1];
				}
				
				arr[pos-1]=em;
				n=n+1;
				break;
				
			case 4:
			cout<<"\nEnter the position of the element you want to delete:\n";
        	cin>>pos;
        	
        	for(j=pos-1;j<n-1;j++)
        	{
                arr[j]=arr[j+1];
        	}
        	n=n-1;
        	cout<<"Item deleted successfully !\n";
        	break;
        	
        	case 5:
        		int key;
        		cout<<"enter the element you want to search"<<endl;
        		cin>>key;
        		for(j=0;j<n;j++)
        		{
        			if(key==arr[j])
        			{
        				cout<<"element is at "<<j<<"th position of the array";
        				break;
					}
				}
				break;
				
			case 6:
				exit(0);
				
			default:
				"please select statement";
				break;
		}
		
		cout<<"task completed \n";
	}
	
}
