#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


// Bubble_sort
void bubble_sort(int arr[],int size)
{
	int swp=0;
	for(int i=0;i<size;i++)
	{
		bool temp = false;
		for(int j=0;j<size-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				temp=true;
				swp++;
			}
				
		}
		if(!temp)
			break;
	}
    cout<<"Bubble sort using funtion:"<<endl;
    for(int i=0;i<=size;i++)
        cout<<arr[i]<<" ";
	cout<<endl<<"Total number of swaps :"<<swp<<endl;

}



int main()
{
    int vec[]={0,56,9,1,3,5};
    int size=sizeof(vec)/sizeof(int);
    /*
    bool optim = false;
    int swp =0;
  
    cout<<size<<endl;
     for(int i:vec)
        cout<<i<<" ";
    cout<<endl;
    for(int j=(size/2)+1;j>=0;j--)
    {

    for(int i=0;i<(size)-1;i++)
    {
        if(vec[i]>vec[i+1])
        {
            int temp=vec[i];
            vec[i]=vec[i+1];
            vec[i+1]=temp;
            optim = true;
            swp++;
        }
    }
    if(optim==false)
    {
        cout<<"Already swapped "<<endl;
        break;
    }
    }
    for(int i:vec)
        cout<<i<<" ";
    cout<<endl<<"Number of swapping in bubble sort : "<<swp<<endl;

*/
    //using funtion
    bubble_sort(vec,size);
    
    

}











