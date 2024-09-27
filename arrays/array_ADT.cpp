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
    printf("\n");
}

// Append an element to the end of the array
void Append(struct Array *arr, int element) // Pass array by pointer to modify the original array
{
    if (arr->length < arr->size) // Check if there's space to add the element
    {
        arr->A[arr->length] = element; // Append element
        arr->length++;                 // Increment length
    }
    else
    {
        printf("Array is full, cannot append element.\n");
    }
}

void Insert(struct Array *arr, int element, int index)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = element;
        arr->length++;
    }
    else
    {
        cout << "Invalid index provided";
    }
}

int Delete(struct Array *arr, int index)
{
    if (index > 0 && index < arr->length)
    {
        int x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }
    return 0;
}
int main()
{
    Array arr;
    int n;
    printf("Enter size of array: \n");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int)); // Allocate memory for array
    arr.length = 0;                                // Initialize length to 0

    printf("Enter amount of numbers: \n");
    scanf("%d", &n);
    arr.length = n;

    if (n > arr.size) // Ensure the number of elements doesn't exceed the array size
    {
        printf("Number of elements exceeds the size of the array.\n");
        return -1;
    }

    printf("Enter all elements: \n");
    for (int i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    }

    Display(arr);         // Display the array before appending
    Append(&arr, 17);     // Append the element 17 to the array (by reference)
    Insert(&arr, 125, 2); // 1 2 125 3 17
    cout << "Deleted " << Delete(&arr, 3) << endl;
    Display(arr); // Display the array after appending

    free(arr.A); // Free the dynamically allocated memory
    return 0;
}
