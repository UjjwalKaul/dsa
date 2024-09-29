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
    void Reverse() // O(n)
    {
        for (int i = 0, j = this->length - 1; i < j; i++, j--)
        {
            int temp = this->A[i];
            this->A[i] = this->A[j];
            this->A[j] = temp;
        }
    }
};

int main()
{
    Array arr = {{2, 4, 6, 8, 10, 14, 18}, 10, 7};
    arr.Display();
    arr.Reverse();
    cout << endl;
    arr.Display();
    return 0;
}