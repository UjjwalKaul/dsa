#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[5];
    int B[5] = {1, 2, 3, 4, 5};
    int C[5] = {2, 4};
    int D[5] = {0};

    cout << "A = ";
    for (int i : A)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "B = ";
    for (int i : B)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "C = ";
    for (int i : C)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "D = ";
    for (int i : D)
    {
        cout << i << " ";
    }
    // Prints
    // A = 6422268 1963883581 8 1963819389 1963819363
    // B = 1 2 3 4 5
    // C = 2 4 0 0 0
    // D = 0 0 0 0 0
    return 0;
}