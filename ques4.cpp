#include<iostream>
using namespace std;

int main()
{
	int i,j,r,c;
	cout<<"enter no. of rows:"<<endl;
	cin>>r;
	cout<<"enter no. of columns:"<<endl;
	cin>>c;
	int a[r][c];
	
	cout<<"Enter Your Matrix:"<<endl;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			cout<<"enter a["<<i<<"]["<<j<<"] : "<<endl;
			cin>>a[i][j];
		}
	}
	
	for(i=0; i<r; i++)
	{	
		int minr=a[i][0],coli=0;
		
		for(j=1; j<c; j++)
		{
			if(minr>a[i][j])
			{
				minr=a[i][j];
				coli=j;
			}
		}
		int k;
		for (k=0; k<r; k++)
		{
			if(minr < a[k][coli])
				break;
		}
		if(k==r)
		{
			cout<<"saddle point is: "<<minr;
		}
	}
	
}
