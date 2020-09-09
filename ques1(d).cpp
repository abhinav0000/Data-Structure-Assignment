#include<iostream>
#define MAX 4
using namespace std;
int main()
{
	int i,j,size;
	size=3*MAX-2;
	int a[size];
	
	int k=0;
	cout<<"enter elements for lower triangular matrix{row major}"<<endl;
	
	for(i=0 ; i<size ; i++)
	{
		cin>>a[i];
	}
	
	cout<<"matrix is :"<<endl;
	
	for(i=0; i<MAX; i++)
	{
		for(j=0; j<MAX; j++)
		{
			if(i>j || i==j)
			{
				cout<<a[k]<<"\t";
				k++;
			}
			else
			{
				cout<<"0\t";
			}
		}
		cout<<endl;
	}
}
