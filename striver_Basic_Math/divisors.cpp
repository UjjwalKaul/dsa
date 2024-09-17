#include <bits/stdc++.h>
using namespace std;

void divisors(int n)
{
    vector<int> ls;
    for (int i = 1; i * i <= n; i++) // Another way of writting i<=sqrt(n)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
                ls.push_back(n / i);
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
    {
        cout << it << " ";
    }
}

int main()
{
    divisors(36); // Returns 1 2 3 4 6 9 12 18 36
    return 0;
}