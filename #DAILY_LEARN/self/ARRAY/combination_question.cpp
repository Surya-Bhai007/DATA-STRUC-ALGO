#include <iostream>
#include<math.h>
#include <vector>
using namespace std;
int main()
{
    cout<<floor(log10(123))+1;

}

/*
//------------------------------SELF---------------------
//_______________________REVERSE THE ARRAY__________________________
void reverse1(int arr[], int size)//int size = sizeof(arr) / sizeof(int);
//
{
    size = size - 1;
    for (int i = 0; i <= (size) / 2; i++)
    {
        int crp = (size - i);				//2,6,4,9
        if (arr[i] != arr[crp])
        {
            int temp = arr[i];
            arr[i] = arr[crp];
            arr[crp] = temp;
        }
    }
    for (int i = 0; i <= size; i++)
        cout << arr[i] << " ";

}

//----------------------BABBER-------------------
void reverse2(int arr[],int size) {
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
    int arr[] = { 2,6,4,9 ,8};
    int arr1[] = { 3,4,5,6,7 };
    int size = sizeof(arr) / sizeof(int);
    //int lenght = size - 1;
    reverse1(arr, size);
    cout << endl;
    reverse2(arr1, 4);

    return 0;
}
*/
/*


//____________________ALTERNATE SWAPPED ARRAY_______________________
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
*/
/*
int binary__search(int arr[], int size, int number)
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
*/

/*
__________________find unique_______________
question link : https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa0htNm05N2tpaU9HekppN1VBVnpFNDdDaWVqQXxBQ3Jtc0trNjBxampjQkpxaVd3UkZBYmJCVEl4YUc2a0Zsa0ZBTzQteFhqTHpBa05fZDhDUGxWYkg4VEl6LTFKaHI0LVJuVWoyTER3ZHZJeGJfSGVYc2VpWElsRl85NHV4QWFmNm9qR0JLRmxIcWFjOHkwdXNadw&q=https%3A%2F%2Fbit.ly%2F3y01Zdu&v=oVa8DfUDKTw

int findUnique(int *arr, int size)
{
    {
        int temp=0;
        for(int i=0;i<size;i++)
        {
            temp = temp^arr[i];
        }
        return temp;
    }
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
    cout<<findUnique(arr, size);
    //cout << binary__search(arr, size, 5);


}
*/
