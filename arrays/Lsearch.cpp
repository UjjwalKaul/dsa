#include <bits/stdc++.h>
using namespace std;

// Transposition is the swapping an element with the previous when found to make the next search more efficient
// Move to Front/Head is the swapping an element with the 1st element when found to make the next search more efficient
struct Array
{
    int A[10];
    int size;
    int length;

    void Display()
    {
        cout << "Elements are: " << endl;
        for (int i = 0; i < this->length; i++)
        {
            cout << this->A[i] << " ";
        }
    }

    void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    int LinearSearch(int key)
    {
        for (int i = 0; i < this->length; i++)
        {
            if (key == this->A[i])
            {
                swap(&this->A[i], &this->A[0]);
                // Or swap(&this->A[i], &this->A[i - 1]);
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Array arr = {{2, 23, 14, 5, 6, 9, 8, 12}, 10, 8};
    cout << arr.LinearSearch(14) << endl; // Returns and prints 2
    cout << arr.LinearSearch(17) << endl; // Returns and prints -1
    return 0;
}