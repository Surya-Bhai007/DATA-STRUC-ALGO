#include<iostream>
using namespace std;

void swap_altrenate(int arr[],int size)
{
	int j ;
	for (int i = 0; i < (size)/2; i++)
	{
		j = 2 * i;
		swap(arr[j], arr[j + 1]);
	}
	cout << "alternate swapped array: ";
	for (int i = 0; i < size; i++)
		cout <<arr[i] << " ";

}
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	int size = sizeof(arr) / sizeof(int);
	cout << "GIVEN ARRAY :";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout<< endl;
	swap_altrenate(arr, size);
}