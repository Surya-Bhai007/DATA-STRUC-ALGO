#include<iostream>
using namespace std;


//	Selection _sort
void selection_sort(int arr[],int size)
{
   int temp;
   for(int j=size -1;j>0;--j)
   {
	 int max =0;
	for( int i=0;i<=j;i++)
	{

		if(max<arr[i])
		{
			max=arr[i];
			temp=i;
		}
		
	}
	
	swap(arr[temp],arr[j]);

   }
	
	
}


int main()
{
	int arr[]={4,3,2,1};
	int size = sizeof(arr)/sizeof(int);

	
	cout<<"BEFORE SORT"<<endl;
     for(int i:arr)
        cout<<i<<" ";
    cout<<endl;

	selection_sort(arr,size);
    cout<<"AFTER SORT using selection sor"<<endl;
	for(int i: arr)
		cout<<i<<" ";

	
}