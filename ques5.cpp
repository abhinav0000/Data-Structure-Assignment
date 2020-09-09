#include<iostream>
using namespace std;

int main()
{	
	int m,n;
	cout<<"Enter the number of rows: "<<endl;
	cin>>m;
	cout<<"Enter the number of columns: "<<endl;
	cin>>n;
	
	int i,j,a[m][n];
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{	
			cout<<"enter a["<<i<<"]["<<j<<"] : "<<endl;
			cin>>a[i][j];
		}
	}
	
	
	int t=0,b=m-1,l=0,r=n-1,dir=0;
	
	while(t<=b && l<=r)
	{
		if(dir==0)
		{
			for(i=l; i<=r; i++)
			cout<<a[t][i]<<", "; 
			t++;
		}
		else if(dir==1)
		{
			for(i=t; i<=b; i++)
			cout<<a[i][r]<<", "; 
			r--;
			
		}
		else if(dir==2)
		{
			for(i=r; i>=l; i--)
			cout<<a[b][i]<<", "; 
			b--;
		}
		else if(dir==3)
		{
			for(i=b; i>=t; i--)
			cout<<a[i][l]<<", "; 
			l++;
		}
		dir=(dir+1)%4;
	}
	
	
	
}
