#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0;
   int a[7] = {64,34,25,12,22,11,90};
   cout <<"Input list ...\n";
   for(i = 0; i<7; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<7; i++) {
   for(j = i+1; j<7; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<7; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}
