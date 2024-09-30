#include <bits/stdc++.h>
using namespace std;
// Combine 2 sorted lists (of size m & n) into single sorted list. Can only be done on sorted arrays
// Time complexity ⊖(m+n)
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
};

Array *Merge(Array *arr1, Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    Array *arr3 = new Array;
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    for (; j < arr2->length; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10; // Or add both lengths and add some extra spaces
    return arr3;
}

int main()
{
    Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    Array arr2 = {{3, 4, 7, 18, 20}, 10, 5};
    arr1.Display(); // 2 6 10 15 25
    arr2.Display(); // 3 4 7 18 20
    Array *arr3;
    arr3 = Merge(&arr1, &arr2);
    arr3->Display(); // 2 3 4 6 7 10 15 18 20 25
    delete arr3;
    return 0;
}