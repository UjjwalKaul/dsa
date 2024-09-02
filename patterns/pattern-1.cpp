#include <bits/stdc++.h>
using namespace std;
// Pattern-1
//  ****
//  ****
//  ****
//  ****
void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n; // Taking length of pattern from user
    print(n);
    return 0;
}