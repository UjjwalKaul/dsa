#include <bits/stdc++.h>
using namespace std;

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

    int BinarySearch(int key)
    {
        int l = 0, h = this->length - 1;
        while (l <= h)
        {
            int mid = l + (h - l) / 2; // mid = (l+h)/2
            if (key == this->A[mid])
            {
                return mid;
            }
            else if (key < this->A[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return -1;
    }
};

int main()
{
    Array arr = {{2, 4, 6, 8, 10, 14, 18}, 10, 7};
    cout << arr.BinarySearch(14) << endl; // Returns and prints 5
    cout << arr.BinarySearch(17) << endl; // Returns and prints -1
    arr.Display();                        // Prints 2 4 6 8 10 14 18
    // Time takes for searching is O(log N)
    return 0;
}