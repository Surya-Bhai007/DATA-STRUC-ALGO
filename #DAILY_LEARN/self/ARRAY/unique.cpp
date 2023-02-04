#include<iostream>
using namespace std;
/*
__________________find unique_______________
question link : https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa0htNm05N2tpaU9HekppN1VBVnpFNDdDaWVqQXxBQ3Jtc0trNjBxampjQkpxaVd3UkZBYmJCVEl4YUc2a0Zsa0ZBTzQteFhqTHpBa05fZDhDUGxWYkg4VEl6LTFKaHI0LVJuVWoyTER3ZHZJeGJfSGVYc2VpWElsRl85NHV4QWFmNm9qR0JLRmxIcWFjOHkwdXNadw&q=https%3A%2F%2Fbit.ly%2F3y01Zdu&v=oVa8DfUDKTw
*/
//1st method
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


//2nd method{ USING  HASHMAP}

int hash_unique(int arr[],int size)
{
	int arr1[1000]={0};
	for(int i=0;i<size;i++)
	{
		arr1[arr[i]]++;
		//arr1[arr[i]] = arr1[arr[i]]+1;									//1 1 5 6 7 7 6
		cout<<arr[i]<<"\t"<<arr1[i]<<endl;

	}
	for(int  i : arr1)
	{
		if(i==1)
			return i;
	}
	return -1;
}
//3rd method{USING  XOR OPERATOR }
//{ a^a =0, a^0=a, a^b = b^a}

int xor_unique(int arr[],int size)
{
	int unq  =0;
	for(int i=0;i<size;i++)
	{
		unq=unq^arr[i];
	}
	return unq;
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
	cout<<findUnique(arr, size)<<endl;
	cout<<"Answer HASH_MAP: "<<hash_unique(arr,size)<<endl;
	cout<<"Answer XOR : "<<xor_unique(arr,size)<<endl;

	//cout << binary__search(arr, size, 5);
	
	
}
