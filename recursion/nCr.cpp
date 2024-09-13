#include <bits/stdc++.h>
using namespace std;

// Method-1 uisng Fact function
int fact(int n)
{
    if (n <= 1)
        return 1;
    return fact(n - 1) * n;
}
int C(int n, int r)
{
    int t1, t2, t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n - r);
    return t1 / (t2 * t3);
}
// Method-2 Recurion only
int NCR(int n, int r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }
    return NCR(n - 1, r - 1) + NCR(n - 1, r);
}
int main()
{
    cout << C(5, 3) << endl;   // 10
    cout << NCR(4, 2) << endl; // 6
    return 0;
}