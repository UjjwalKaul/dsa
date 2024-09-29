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
        cout << endl;
    }
    void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    void InsertSort(int x)
    {
        int i = this->length - 1;
        if (this->length == this->size)
        {
            return;
        }
        while (i >= 0 && this->A[i] > x)
        {
            this->A[i + 1] = this->A[i];
            i--;
        }
        this->A[i + 1] = x;
        this->length++;
    }

    bool isSorted()
    {
        for (int i = 0; i < this->length - 1; i++)
        {
            if (this->A[i] > this->A[i + 1])
            {
                return false;
            }
        }
        return true;
    }

    void Rearrange()
    {
        int i = 0, j = this->length - 1;
        while (i < j)
        {
            while (this->A[i] < 0)
            {

                i++;
            }
            while (this->A[j] >= 0)
            {

                j--;
            }
            if (i < j)
            {
                swap(&this->A[i], &this->A[j]);
            }
        }
    }
};

int main()
{
    Array arr = {{2, 3, 5, 10, 15}, 10, 5};

    arr.Display(); // 2 3 5 10 15
    arr.InsertSort(7);
    arr.Display();                  // 2 3 5 7 10 15
    cout << arr.isSorted() << endl; // Prints 1

    Array arr2 = {{2, -3, 5, 10, -15}, 10, 5};
    arr2.Display(); // 2 -3 5 10 -15
    arr2.Rearrange();
    arr2.Display(); // -15 -3 5 10 2
    return 0;
}