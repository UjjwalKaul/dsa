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
// Other variant
// int sum(int n)
// {
//     return n * (n + 1) / 2;
// }

int main()
{
    cout << sumOfN(7) << endl;
    // Time Complexity  - O(n)
    // Space Complexity - O(n)
}
