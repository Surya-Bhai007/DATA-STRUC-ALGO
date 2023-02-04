#include<iostream>
#include<math.h>
using namespace std;


int even_digit(int arr[],int size)
{
	int count=0,digit;

	// for(int i=0;i<size;i++)
	// {
	// 	digit=0;
	// 	digit=ceil(log10(arr[i])+1);
	// 	if(digit%2==0)
	// 		count++;
	// }	



	while(size--)     //ask with while
	{
		 digit=0;
		
		
		digit=int((log10(arr[size])+1));
		cout<<digit<<endl;
		if(digit%2==0)
			count++;

	}

	return count;
}


int main()
{

int arr[]={20};
int size =sizeof(arr)/sizeof(arr[0]);
cout<<"Size:"<<size<<endl;
cout<<"Number of even digit number:"<<even_digit(arr,size)<<endl;






}