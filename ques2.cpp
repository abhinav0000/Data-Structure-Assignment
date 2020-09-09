#include<iostream>
#define max 12
using namespace std;

void readsp(int b[][3])
{
	int i;
	cout<<"enter number of rows and columns:"<<endl;
	cin>>b[0][0]>>b[0][1];
	cout<<"enter number of values"<<endl;
	cin>>b[0][2];
	
	cout<<"enter triplet (row,column,value) : "<<endl;
	for(i=1; i<=b[0][2]; i++)
	{
		cin>>b[i][0]>>b[i][1]>>b[i][2];
	}
}


void printsp(int b[][3])
{
	int i,j,k=1;
	
	cout<<"Matrix is:"<<endl;
	for(i=0; i<b[0][0]; i++)
	{
		for(j=0; j<b[0][1]; j++)
		{
			if( i==b[k][0] && j==b[k][1] )
			{
				cout<<b[k][2]<<"\t";
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


void transposesp(int a[][3], int b[][3])
{
	
	int i,j,k=1;
    b[0][0] = a[0][1];
    b[0][1] = a[0][0];
    b[0][2] = a[0][2];
    if(b[0][2] > 0)
    {    for(i=0;i<a[0][1];i++)
         {    for(j=1;j<=a[0][2];j++)
              {    if(a[j][1]==i)
                   {    b[k][0] = a[j][1];
                        b[k][1] = a[j][0];
                        b[k][2] = a[j][2];
                        k++;
                   }
              }
         }
    }
	
}


int addsp(int sp1[][3], int sp2[][3], int sp3[][3])
{   int k1, k2, k3, tot1, tot2;
    if(sp1[0][0] == sp2[0][0] && sp1[0][1] == sp2[0][1])
    {    tot1 = sp1[0][2]; tot2 = sp2[0][2];
         k1 = k2 = k3 = 1;
         while ( k1 <= tot1 && k2 <= tot2)
         {    if ( sp1[k1][0] < sp2[k2][0] )
              {    sp3[k3][0] = sp1[k1][0];
                   sp3[k3][1] = sp1[k1][1];
                   sp3[k3][2] = sp1[k1][2];
                   k3++; k1++;
              }
              else if ( sp1[k1][0] > sp2[k2][0] )
              {    sp3[k3][0] = sp2[k2][0];
                   sp3[k3][1] = sp2[k2][1];
                   sp3[k3][2] = sp2[k2][2];
                   k3++; k2++;
              }
              else
              {    if ( sp1[k1][1] < sp2[k2][1] )
                   {    sp3[k3][0] = sp1[k1][0];
                        sp3[k3][1] = sp1[k1][1];
                        sp3[k3][2] = sp1[k1][2];
                        k3++; k1++;
                   }
                   else if ( sp1[k1][1] > sp2[k2][1] )
                   {    sp3[k3][0] = sp2[k2][0];
                        sp3[k3][1] = sp2[k2][1];
                        sp3[k3][2] = sp2[k2][2]; 
                        k3++; k2++;
                   }
                   else
                   {    sp3[k3][0] = sp2[k2][0];
                        sp3[k3][1] = sp2[k2][1];
                        sp3[k3][2] = sp1[k1][2] + sp2[k2][2];
                        k3++; k2++; k1++;
                   }
              }
         }
         while ( k1 <=tot1 )
         {    sp3[k3][0] = sp1[k1][0];
              sp3[k3][1] = sp1[k1][1];
              sp3[k3][2] = sp1[k1][2];
              k3++; k1++;
         }
         while ( k2 <= tot2 )
         {    sp3[k3][0] = sp2[k2][0];
              sp3[k3][1] = sp2[k2][1];
              sp3[k3][2] = sp2[k2][2];
              k3++; k2++;
         }
         sp3[0][0] = sp1[0][0];
         sp3[0][1] = sp1[0][1];
         sp3[0][2] = k3-1;
    }
    else
         printf("\nInvalid Dimensions.\n");
}


int main()
{
	int a[max][3],b[max][3],c[max][3];
	readsp(a);
	printsp(a);
	transposesp(a,b);
	printsp(b); 
	addsp(a,b,c);
	printsp(c);
}
