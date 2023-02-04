#include<iostream>
using namespace std;

void reverse_self(int arr[], int size)
{
	for (int i = 0; i <= (size)/2; i++) {
		int crp = size - i;
		if (arr[i] != arr[crp]) {
			int temp = arr[i];
			arr[i] = arr[crp];
			arr[crp] = temp;
		}
	}
	for (int i = 0; i <= size; i++)
		cout << arr[i] << " ";

}
void reverse_babber(int arr[],int size) {
	int start = 0;
	int end = size ;
	while (start <= end) {
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
	for (int i = 0; i <= size; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr1[] = { 0,-6,-4,-9 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	size1 = size1 - 1;
	reverse_self(arr1, size1);
	
}