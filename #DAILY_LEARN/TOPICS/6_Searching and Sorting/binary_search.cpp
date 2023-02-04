#include<iostream>
#include<vector>
using namespace std;


int binary_search(int arr[],int size,int target)
{
    int start = 0;
    int end = size-1;
    int mid;
    while(start<=end)
    {
        mid= start+(end-start)/2;
        if(arr[mid]==target)
            return arr[mid];
        if(arr[mid]<target)
            start = mid+1;
        else
            end = mid-1;
    }
    return -1;

}
int floorprac(int arr[],int size,int target)
{
int start =0;
int end = size-1;
int mid=start+(end-start)/2;
while(start<=end)
    {
	int mid= start+(end-start)/2;
    if(arr[mid]==target)
		return start;
	if(arr[mid]>target)
		end=mid-1;
	else
		start=mid+1;
	}
    return arr[end];
}
//Question

//1. ceiling of a number

int ceiling(int arr[],int size,int target)
{
    if(target>arr[size-1]);
        return -1;
    int start=0;
    int end = size-1;
    int mid;
    while (start<=end)
    {
        mid = start+(end-start)/2;
        if(target==arr[mid])
            return arr[mid];
        if(target<arr[mid])
            end=mid-1;
        else if(target>arr[mid])
                start=mid+1;
        /* code */
    }
    return arr[start];
    
}
 //Q2 : floor of the function

 int floor(int arr[],int size,int target)
 {
    if(target<arr[0]);
        return -1;
    int start =0;
    int end = size-1;
    int mid;
    while (start<=end)
    {
        mid =start+(end -start)/2;
        if(target==arr[mid])
            return arr[mid];
        if(target<arr[mid])
            end = mid-1;
        else
            start  =mid+1;
    }
    return arr[end];
 }
/*3. Find Smallest Letter Greater Than Target
https://leetcode.com/problems/find-smallest-letter-greater-than-target/
*/
char nextGreatestLetter(vector<char>& letters, char target) {
       // if(target >=letters[letters.size()-1])
           // return letters[0];
       // int size = letters.size()-1;
        int start = 0;
        int end = letters.size()-1;
        int mid;
        while(start<=end)
        {
            mid = start+(end-start)/2;
           // if(target==letters[mid])
               // return letters[mid+1];
            if(target<int(letters[mid]))
                end = mid-1;
            else
                start = mid+1;
            
                
        }
        return letters[start%letters.size()];
    }







int main()
{
    int arr_ascending[]={1,2,4,5,6,7,8,9};
    int arr_descending[]={19,17,11,8,5,2,1};
    vector<char> letters = {'c','f','a'};
    char char_target = 'f';
    int size = sizeof(arr_ascending)/sizeof(int);


    //cout<<"Binary search: "<<bin_prac(arr_ascending,size,2)<<endl;
   // cout<<"Ceiling of number: "<<ceil_prac(arr_ascending,size,3)<<endl;
    //cout<<"Floor of number: "<<floorprac(arr_ascending,size,3)<<endl;
    cout<<"Smallest letter greater then target {"<<char_target<<"} is ->"<<nextGreatestLetter(letters, char_target)<<endl;
}