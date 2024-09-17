#include <bits/stdc++.h>
using namespace std;

void checkPrime(int n)
{
    int count = 0;
    for (int i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        if ((n / i) != i)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d is a prime number \n", n);
    }
    else
    {
        printf("%d is NOT a  prime number \n", n);
    }
}
int main()
{

    checkPrime(5);  // 5 is a prime number
    checkPrime(25); // 25 is NOT a prime number
    return 0;
}