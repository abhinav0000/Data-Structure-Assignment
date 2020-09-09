#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter no. of rows and column in symmetric matrix\n";
	cin>>n;
	int b=n*(n+1)/2;
	int a[b];
	cout<<"enter elements row major for lower triangular part";
	for(int i=0;i<b;i++)
	{
		cout<<"enter element\n";
		cin>>a[i];
	}
	int k=0;
	for(int i=0;i<n;i++)
	{ for(int j=0;j<n;j++)
	{
		if(i>=j){
        cout<<a[((i*(i+1))/2)+j]<<"  ";
      }
      else
        cout<<a[((j*(j+1))/2)+i]<<"  ";

		   
		}
		cout<<"\n";
	}
	return 0;

}
