#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p = new int[5];
    // To increare size of an array create another pointer that points to larger array in heap and copy the elements into it
    int *q = new int[10];

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    delete[] p; // Free the previous memory

    p = q;    // Make the old pointer point to the new larger array
    q = NULL; // Make the new pointer to point to NULL or nullptr

    // Print the array
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}