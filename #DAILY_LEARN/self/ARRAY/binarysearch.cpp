#include <stdio.h>
#include<iostream>
using namespace std;

int  binary_search1( int arr[], int size,int n)
{
	int start = 0;
	int end = size - 1;
	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (arr[mid] == n)
			return mid;
		else if (arr[mid] > n)
			end = mid - 1;
		else
			start = mid + 1;
	}
};

int binary__search2(int arr[], int size, int number)
{
	int start = 0;
	int end = size - 1;
	while (start <= end)
	{
		int mid = start + (end - start) / 2;
		if (arr[mid] == number) return mid;
		else if (arr[mid] < number) start += 1;
		else end--;
	}

};
int main()
{
	int n;
	
	int arr[] = {2,4,5,6};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "enter element which u want to find in array: ";
	cin >> n;
	cout << binary_search1(arr,size,n);
	return 0;
}
