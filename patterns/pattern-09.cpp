#include <bits/stdc++.h>
using namespace std;
// Pattern-9
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        // print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // print stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void print2(int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        // print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // print stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print1(n); // print the top part of the diamond
    print2(n); // print the bottom part of the diamond
    return 0;
}
