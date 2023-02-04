#include <iostream>
using namespace std;

void array_rotation(int arr[], int length, int d)
{
for(int j= 0;j<d;j++)
{
    
    for (int i = 0; i < length - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
    }
}

}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int d;
    cin >> d;
    int size = sizeof(arr) / sizeof(int);
    array_rotation(arr, size, d);
    for (int i : arr)
        cout << i;
}