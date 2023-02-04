#include <iostream>
#include <vector>
using namespace std;

int power(int x, int m)
{
    if (m == 0)
        return 1;

    {
        // int temp = sum(n)+sum(n-1);
        return (x * power(x, m - 1));
    }
}

int optimisedpower(int x, int m)
{
    if (m == 0)
        return 1;
    long long temp = optimisedpower(x, m / 2);
    if (m % 2 == 1)
        return temp * temp * x;

    return temp * temp;
}

int main()
{
    int x, m;
    cin >> x >> m;
    cout << "With normal recursion (o(m)):" << power(x, m) << endl;
    cout << "with optimised version (log m) :" << optimisedpower(x, m) << endl;
}
