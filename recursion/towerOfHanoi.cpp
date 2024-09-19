#include <bits/stdc++.h>
using namespace std;
// TOWER OF HANOI
//  The goal is to move n discs from the source rod (A) to the destination rod (C), using the auxiliary rod (B), following these rules:
//  Only one disc can be moved at a time.
//  A disc can only be placed on top of a larger disc.
//  |   #   |         |         |
//  |  ###  |         |         |
//  | ##### |         |         |
//   A(src)   B(aux)    C(dest)
//  For n discs it takes (2^n) - 1 steps to complete
void ToH(int n, int A, int B, int C) // No. of discs , Source, Auxillary, Destination Here, A=1 B=2 C=3
{
    if (n > 0)
    {
        ToH(n - 1, A, C, B);
        printf("from %d to %d \n", A, C);
        ToH(n - 1, B, A, C);
    }
}
int main()
{
    ToH(3, 1, 2, 3);
    // Prints
    // from 1 to 3
    // from 1 to 2
    // from 3 to 2
    // from 1 to 3
    // from 2 to 1
    // from 2 to 3
    // from 1 to 3

    // O(2^n)
    return 0;
}