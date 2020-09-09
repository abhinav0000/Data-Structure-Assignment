#include<iostream>
using namespace std;
int main()
{
	int a[4][4],i,j,s,n,m;
	cout<<"Enter the number of rows: "<<endl;
	cin>>m;
	cout<<"Enter the number of columns: "<<endl;
	cin>>n;
	
	cout<<endl<<"Enter the elements of the 2-D Matrix : ";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
			cout<<"enter a["<<i<<"]["<<j<<"] : "<<endl;
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		cout<<endl<<"Sum of elements of row "<<i+1<<" is : ";
		s=0;
		for(j=0;j<n;j++)
		{
			s=s+a[i][j];
		}
		cout<<s;
	}
	for(j=0;j<n;j++)
	{
		cout<<endl<<"Sum of elements of column "<<j+1<<" is : ";
		s=0;
		for(i=0;i<n;i++)
		{
			s=s+a[i][j];
		}
		cout<<s;
	}
	
}	

