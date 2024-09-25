#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Once an array is created it's size cannot be modified
    // Array of size 5 is created in stack as a part of activation record of main function
    // In C arrays are static as size of the array is decided at compile time even though memory is allocated at runtime
    // In C++ size of an array can be decided at runtime by taking input from the user at runtime
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int A[n]; // Array with size requested from user

    // To created array in heap we need a pointer
    int *p;
    p = (int *)malloc(5 * sizeof(int)); // Create memory in heap where p points to the start of the array in C
    p = new int[5];                     // Create memory in heap where p points to the start of the array in C++

    p[0] = 5; // Accessing heap array
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    // Any allocated memory must be freed after use to avoid memory leak
    delete[] p; // Deallocation in C
    free(p);    // Deallocation in C++

    return 0;
}