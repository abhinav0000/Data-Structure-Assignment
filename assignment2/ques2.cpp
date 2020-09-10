#include <iostream>
using namespace std;
 
int main()
{
    int arr[100],b[100];
    int size, i, j, temp;
 
    
    cout<<"Enter size of array: ";
    cin>>size;
 
    
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    for(i=0;i<size;++i)
		for(j=i+1;j<size;)
		{
			if(arr[i]==arr[j])
			{
				for(int k=j;k<size-1;++k)
					arr[k]=arr[k+1];
					
				--size;
			}
			else
				++j;
		}
	
	cout<<"Elements of array after removing identical elements:"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    
 
    return 0;
}
 

