#include <iostream>
#include <vector>
using namespace std;

int sum(int n)
{
  if(n==1)
    return 1;
  
  {
    //int temp = sum(n)+sum(n-1);
    return(sum(n-1)+n);

  }
}
      
int main()
{
  int n,m;
  cin>>n;
  cout<<sum(n);


  }

