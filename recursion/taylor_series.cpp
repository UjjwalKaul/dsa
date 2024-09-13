#include <bits/stdc++.h>
using namespace std;

// Method-1
double e1(int x, int n)
{
    static double p = 1, f = 1;
    double result;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        result = e1(x, n - 1);
        p = p * x;
        f = f * n;
        return result + (p / f);
    }
}

// Method-2 loops

double e2(int x, int n)
{
    double s = 1;
    double num = 1, den = 1;
    for (int i = 1; i < n; i++)
    {
        num *= x;
        den *= i;
        s += num / den;
    }
    return s;
}

// Method-3 Horner's Rule using recursion

double e3(int x, int n)
{
    static double s;
    if (n == 0)
    {
        return s;
    }
    s = 1 + x * s / n;
    return e3(x, n - 1);
}

int main()
{
    printf("%lf \n", e1(3, 10)); // 20.079665
    printf("%lf \n", e2(3, 10)); // 20.063393
    printf("%lf \n", e3(3, 10)); // 20.063393
    return 0;
}