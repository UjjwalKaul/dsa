#include <bits/stdc++.h>
using namespace std;
// Euclidean Alogrithm states that:
// Basic: GCD(a, b) = GCD(a - b, b) where a > b
// Extended: GCD(a, b) = GCD(a % b, b) where a > b
// when one of them is 0 the other is the gcd

int GCD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}
int main()
{
    cout << GCD(5, 25); // O(logɸ[min(a,b)])
    return 0;
}