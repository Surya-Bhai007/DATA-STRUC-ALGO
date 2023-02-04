#include<iostream>
#include <array>
using namespace std;


int dub(int arr1[],int size)
{
    int sum=0,sum1=0;
    for(int i=0;i<size;i++)
        sum+=arr1[i];
    for(int i=0;i<size;i++)
    {
        sum1+=arr1[i];
    }
    return (sum1 -sum);
}

int main()
{
	int arr[] = { 1,1,5,6,7,7,6 };
	int size = sizeof(arr) / sizeof(int);
	cout << "size: " << size << endl;
	cout << "GIVEN ARRAY :";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
	cout<<dub(arr, size)<<endl;
}