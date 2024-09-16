#include <bits/stdc++.h>
using namespace std;

void getDigits(int n)
{
    while (n > 0)
    {
        int digit = n % 10;
        cout << digit << endl;
        n = n / 10;
    }
}

int main()
{
    getDigits(77891);
    return 0;
}