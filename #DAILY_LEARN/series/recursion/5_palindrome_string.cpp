#include <iostream>
#include <vector>
#include<string>

using namespace std;

bool helper(int l,string &s,int r)
    {
        if(l>=r) return true;
        if(s[l]!=s[r])return false;
        return helper(l+1,s,r-1);
    }
bool isPalindrome(string &s) {
        //string s= to_string(x);
         return helper(0,s,s.size()-1);
    }

int main()
{
    string s;
    cin>>s;
    cout<<isPalindrome(s);
}