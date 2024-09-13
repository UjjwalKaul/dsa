#include <bits/stdc++.h>
using namespace std;

// Method-1 Iterator
int fib1(int n)
{
    int t0 = 0, t1 = 1, s = 0, i;

    if (n <= 1)
        return n;
    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

// Method-2 Recursion
int fib2(int n)
{
    if (n <= 1)
        return n;
    return fib2(n - 2) + fib2(n - 1);
}
// Method-3 Recursion with Memoization
int F[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
int fib3(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
        {
            F[n - 2] = fib3(n - 2);
        }
        if (F[n - 1] == -1)
        {
            F[n - 1] = fib3(n - 1);
        }
        return F[n - 2] + F[n - 1];
    }
}

int main()
{
    cout << fib1(10) << endl; // 55
    cout << fib2(10) << endl; // 55
    cout << fib3(10) << endl; // 55
    return 0;
}