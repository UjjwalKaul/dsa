#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Method-1: Creating 2D array on the stack
    int A1[3][4]; // 3x4 array

    // Adding an element in Method-1
    A1[1][2] = 15;

    // Method-2: Array of integer pointers, pointing to arrays on the heap
    int *A2[3];         // Array of 3 integer pointers
    A2[0] = new int[4]; // Array of 4 integers on the heap
    A2[1] = new int[4]; // Another array of 4 integers
    A2[2] = new int[4]; // Another array of 4 integers

    // Adding an element in Method-2
    A2[1][2] = 20;

    // Method-3: Double pointer for dynamic 2D array
    int **A3;
    A3 = new int *[3];  // Array of 3 integer pointers
    A3[0] = new int[4]; // Array of 4 integers on the heap
    A3[1] = new int[4]; // Another array of 4 integers
    A3[2] = new int[4]; // Another array of 4 integers

    // Adding an element in Method-3
    A3[1][2] = 25;

    // Output for Method-1
    cout << "Method-1 (Stack 2D array):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A1[i][j] << " ";
        }
        cout << endl;
    }

    // Output for Method-2
    cout << "Method-2 (Heap array of pointers):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A2[i][j] << " ";
        }
        cout << endl;
    }

    // Output for Method-3
    cout << "Method-3 (Heap dynamic array):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A3[i][j] << " ";
        }
        cout << endl;
    }

    // Clean up memory for heap-allocated arrays in Method-2 and Method-3
    for (int i = 0; i < 3; i++)
    {
        delete[] A2[i];
        delete[] A3[i];
    }
    delete[] A3;

    return 0;
}
