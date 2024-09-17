#include <bits/stdc++.h>
using namespace std;

int GCD(int n, int m)
{
    int gcd = 1;
    for (int i = 1; i <= min(n, m); i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
int main()
{
    cout << GCD(5, 25); // O(min(n,m))
    return 0;
}