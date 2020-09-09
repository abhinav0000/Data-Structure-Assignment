#include<iostream>
#define MAX 4
using namespace std;
int main()
{
	int i,j,a[MAX];
	int k=0;
	cout<<"enter elements in diagonal"<<endl;
	
	for(i=0 ; i<MAX ; i++)
	{
		cin>>a[i];
	}
	
	cout<<"matrix is :"<<endl;
	
	for(i=0; i<MAX; i++)
	{
		for(j=0; j<MAX; j++)
		{
			if(i==j)
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
