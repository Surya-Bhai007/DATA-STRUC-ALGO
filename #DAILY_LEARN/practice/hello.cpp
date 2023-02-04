
//#include<bits/stdio.h>
#include <iostream>
#include <vector>
using namespace std;

void display(int arr[], int size)
{
   for (int i = 0; i < size; i++)
      cout << arr[i] << " ";
}
void insertion(int arr[], int size, int num, int index)
{
   for (int i = size - 1; i >= index; i--)
   {
      arr[i + 1] = arr[i];
   }
   arr[index] = num;

   for (int i = 0; i < size; i++)
      cout << arr[i] << " ";
}
void deletion(int arr[], int size, int index)
{
   for (int i = index; i < size - 1; i++)
   {
      arr[i] = arr[i + 1];
   }
}

int linear_srch(int arr[], int size, int num)
{
   for (int i = 0; i < size; i++)
   {
      if (num == arr[i])
         return true;
   }
   return 0;
}

int binary_search(int arr[], int size, int num)
{
   int start = 0;
   int end = size - 1;
   int mid = start + (end - start) / 2;
   if (arr[mid] == num)
   {
      cout << "found at index " << mid;
      return 1;
   }
   while (start <= end)
   {
      int mid = start + (end - start) / 2;
      if (arr[mid] == num)
      {
         cout << "found at index " << mid << endl;
         return true;
      }

      else if (arr[mid] > num)
         end = mid - 1;

      else if (arr[mid] < num)
         start = mid + 1;
   }
   cout << "not found  ";
   return 0;
}

int flor_(int arr[], int size, int num)
{
   int start = 0;
   int end =size - 1;
   int mid = start + (end - start) / 2;
   if (arr[mid] == num)
   {
      cout << "floor of given number is" << arr[mid];
      return 1;
   }
   while (start < end)
   {
      mid = start + (end - start) / 2;
      if (arr[mid] == num)
      {
         cout << "floor of given number is" << arr[mid];
         return 1;
      }
      else if (arr[mid] < num)
      {
         start = mid + 1;
      }
       else if(arr[mid]>num)
       {
         end=mid-1;
       }
   }
   return arr[start];
}


int main()
{
   int arr[] = {2, 3, 5,  7};
   int size = sizeof(arr) / sizeof(arr[0]);
   display(arr, size);
   cout << "\n";
   // cout<<endl;
   // insertion(arr,size,9,1);
   //  cout<<endl;
   //  deletion(arr,size,2);
   //  size-=1;
   //  display(arr,size);
    //cout<<linear_srch(arr,size,6);
   // cout << binary_search(arr, size, 6);//{for sorted array}
   cout<<flor_(arr,size,6);
}
