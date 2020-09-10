#include<iostream> 
using namespace std; 
int main(){ 
int n; 
cout<<"enter number of elements in array";
cin>>n; 
int a[n]; 
cout<<"enter elements";
for(int i =0;i<n;i++){ 
    cin>>a[i]; 
} 
int i=0; 
int j =n-1; 
while(i<=j){ 
    swap(a[i],a[j]); 
i++; 
j--; 
} 
for(int m =0;m<n;m++){ 
    cout<<a[m]<<"\t"; 
} 
 
} 
