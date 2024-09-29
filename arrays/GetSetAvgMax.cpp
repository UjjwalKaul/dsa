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

    int Get(int index) // O(1)
    {
        if (index >= 0 && index < this->length)
        {
            return this->A[index];
        }
        return int(NULL);
    }
    void Set(int index, int element) // O(1)
    {
        if (index >= 0 && index < this->length)
        {
            this->A[index] = element;
        }
    }

    int Max() // O(n)
    {
        int max = this->A[0];
        for (int i = 0; i < this->length; i++)
        {
            if (this->A[i] > max)
            {
                max = this->A[i];
            }
        }
        return max;
    }

    int Min() // O(n)
    {
        int min = this->A[0];
        for (int i = 0; i < this->length; i++)
        {
            if (this->A[i] < min)
            {
                min = this->A[i];
            }
        }
        return min;
    }

    int Sum()
    {
        int total = 0;
        for (int i = 0; i < this->length; i++)
        {
            total = total + this->A[i];
        }
        return total;
    }
};
int main()
{
    Array arr = {{2, 4, 6, 8, 10, 14, 18}, 10, 7};
    cout << arr.Get(2) << endl; // Prints 6
    cout << arr.Max() << endl;  // Prints 18
    cout << arr.Min() << endl;  // Prints 2
    arr.Set(1, 120);
    arr.Display(); // Prints 2 120 6 8 10 14 18
    cout << endl;
    cout << "Sum: " << arr.Sum(); // Prints 178
    return 0;
}