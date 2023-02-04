#include<iostream>
using namespace std;


//	Selection _sort
void cyclic_sort(int arr[],int size)
{

	for( int i=0;i<size;i++)
	{
         //IF 0 IS NOT IN ARREY THAN 
         //{correct_index  =arr[i]-1 }IT WILL WORK 
         //IF ZERO IS IN ARRAY THAN CORRECT_INDEX = ARR[i];
    int correct_index = arr[i]; 
		if(correct_index!= i)
		{
			swap(arr[i],arr[correct_index]);
		}
		
	}
	
	

   }
	
	



int main()
{
	int arr[]={4,3,2,1,0};
	int size = sizeof(arr)/sizeof(int);

	
	cout<<"BEFORE SORT"<<endl;
     for(int i:arr)
        cout<<i<<" ";
    cout<<endl;

	cyclic_sort(arr,size);
    cout<<"AFTER SORT using cyclic sort"<<endl;
	for(int i: arr)
		cout<<i<<" ";

	
}