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
