#include <bits/stdc++.h>

using namespace std;

int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return pow(m * m, n / 2);
    }
    else
    {
        return m * pow(m * m, (n - 1) / 2);
    }
}

int main()
{
    cout << pow(2, 9);
    // Time Complexity: O(log n)
    // Space Complexity: O(log n)
}