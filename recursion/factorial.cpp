#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}

int main()
{
    cout << fact(5);
    // Time Complexity  - O(n)
    // Space Complexity - O(n)
}