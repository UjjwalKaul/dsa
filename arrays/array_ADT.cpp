#include <bits/stdc++.h>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

// Display array elements
void Display(struct Array arr)
{
    printf("Elements are: \n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int main()
{
    Array arr;
    int n;
    printf("Enter size of array \n");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int)); // Or  arr.A = new int[arr.size];
    arr.length = 0;

    printf("Enter amount of numbers \n");
    scanf("%d", &n);
    arr.length = n;

    printf("Enter all elements \n");
    for (int i = 0; i < arr.length; i++)
    {
        scanf("%d \n", &arr.A[i]);
    }

    Display(arr);
    return 0;
}

// class version
// #include <iostream>
// using namespace std;

// class Array
// {

// private:
//     int *A;
//     int size;
//     int length;

// public:
//     Array(int size)
//     {
//         this->size = size;
//         A = new int[size];
//     }

//     void create()
//     {
//         cout << "Enter number of elements: " << flush;
//         cin >> length;
//         cout << "Enter the array elements: " << endl;
//         for (int i = 0; i < length; i++)
//         {
//             cout << "Array element: " << i << " = " << flush;
//             cin >> A[i];
//         }
//     }

//     void display()
//     {
//         for (int i = 0; i < length; i++)
//         {
//             cout << A[i] << " ";
//         }
//     }

//     ~Array()
//     {
//         delete[] A;
//         cout << "Array destroyed" << endl;
//     }
// };

// int main()
// {

//     Array arr(10);
//     arr.create();
//     arr.display();

//     return 0;
// }