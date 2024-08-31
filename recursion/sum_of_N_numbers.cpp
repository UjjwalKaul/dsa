#include <bits/stdc++.h>

using namespace std;

int sumOfN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sumOfN(n - 1) + n;
    }
}

int main()
{
    cout << sumOfN(7);
}