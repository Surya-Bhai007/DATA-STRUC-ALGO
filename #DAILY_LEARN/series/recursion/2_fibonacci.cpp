#include<iostream>
using namespace std;

int fibonaci(int n)
{
    cout<<n<<endl;
    if(n==1)
        return 1;
    else if(n==0)
        {
            return 0;
        } 
    
     return fibonaci(n-1)+fibonaci(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonaci(n)<<endl;

}