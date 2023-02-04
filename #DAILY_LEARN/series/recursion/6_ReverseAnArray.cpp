#include <iostream>
#include<vector>
using namespace std;

void swap1(int l,vector<int> &arr,int r)
{
    if(l>=r)
        return ;
    swap(arr[l],arr[r]);
    swap1(l+1,arr,r-1);

}

void reverseArray(vector<int> &arr , int m)
{
	int r  = arr.size()-1;
    swap1(m+1,arr,r);
    
}


int main()
{
    int n;
    cin >> n;
   vector <int> arr={1,2,3,4,5};
    reverseArray(arr,n);
    for(int i : arr )
        cout << i;
}