#include <iostream>
using namespace std;

void subarray_genrate(int arr[],int n)
{
    
   // int final_arr[20];
    for (int i = 0; i <n; i++)
    {
        for(int j=i;j<n;j++)
        {

            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<",";
            }
         cout<<endl;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    int size ;
    cin>>size;
   subarray_genrate(arr,size);
    for (int i : arr)
        cout << i;
}