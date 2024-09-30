#include <bits/stdc++.h>
using namespace std;

// Array struct representing an array with fixed size, current length, and a method to display the elements.
struct Array
{
    int A[10];  // Fixed-size array of 10 elements
    int size;   // Maximum capacity of the array
    int length; // Number of elements currently in the array

    // Display method to print elements of the array
    void Display()
    {
        cout << "Elements are: " << endl;
        for (int i = 0; i < this->length; i++) // Iterate through all valid elements
        {
            cout << this->A[i] << " "; // Print each element
        }
        cout << endl;
    }
};

// Function to compute the Union of two arrays
// Union: Includes elements from both arrays without duplicates (set union)
Array *Union(Array *arr1, Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    Array *arr3 = new Array; // Create a new array to store the result

    // Traverse both arrays while both have unprocessed elements
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j]) // If arr1's element is smaller, add it to result
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr2->A[j] < arr1->A[i]) // If arr2's element is smaller, add it to result
        {
            arr3->A[k++] = arr2->A[j++];
        }
        else // If both elements are equal, add only one of them (to avoid duplicates)
        {
            arr3->A[k++] = arr1->A[i++];
            j++; // Move both pointers to avoid adding the same element twice
        }
    }

    // Copy remaining elements of arr1, if any
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }

    // Copy remaining elements of arr2, if any
    for (; j < arr2->length; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }

    arr3->length = k; // Update the length of the result array
    arr3->size = 10;  // Set the size of the result array
    return arr3;      // Return the result array
}

// Function to compute the Intersection of two arrays
// Intersection: Includes elements that are present in both arrays (common elements)
Array *Intersection(Array *arr1, Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    Array *arr3 = new Array; // Create a new array to store the result

    // Traverse both arrays to find common elements
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j]) // If arr1's element is smaller, it cannot be in arr2, so skip it
        {
            i++;
        }
        else if (arr2->A[j] < arr1->A[i]) // If arr2's element is smaller, it cannot be in arr1, so skip it
        {
            j++;
        }
        else // If elements are equal, add to the result (common element)
        {
            arr3->A[k++] = arr1->A[i++];
            j++; // Move both pointers to check the next elements
        }
    }

    arr3->length = k; // Update the length of the result array
    arr3->size = 10;  // Set the size of the result array
    return arr3;      // Return the result array
}

// Function to compute the Difference of two arrays
// Difference: Includes elements that are in arr1 but not in arr2
Array *Difference(Array *arr1, Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    Array *arr3 = new Array; // Create a new array to store the result

    // Traverse both arrays while both have unprocessed elements
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j]) // If arr1's element is not in arr2, add it to the result
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr2->A[j] < arr1->A[i]) // If arr2's element is smaller, skip it
        {
            j++;
        }
        else // If elements are equal, skip both (since we only want elements in arr1 but not arr2)
        {
            i++;
            j++;
        }
    }

    // Add remaining elements of arr1 (since they are not in arr2)
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }

    arr3->length = k; // Update the length of the result array
    arr3->size = 10;  // Set the size of the result array
    return arr3;      // Return the result array
}

int main()
{
    // Two arrays for testing the functions
    Array arr1 = {{2, 6, 10, 15, 25}, 10, 5}; // First array
    Array arr2 = {{3, 6, 7, 15, 20}, 10, 5};  // Second array

    Array *arr3; // Pointer to store the result of each operation

    // Perform Union of arr1 and arr2
    arr3 = Union(&arr1, &arr2);
    arr3->Display(); // Output: 2 3 6 7 10 15 20 25
    delete arr3;     // Free the memory allocated for arr3

    // Perform Intersection of arr1 and arr2
    arr3 = Intersection(&arr1, &arr2);
    arr3->Display(); // Output: 6 15
    delete arr3;     // Free the memory allocated for arr3

    // Perform Difference of arr1 and arr2 (arr1 - arr2)
    arr3 = Difference(&arr1, &arr2);
    arr3->Display(); // Output: 2 10 25
    delete arr3;     // Free the memory allocated for arr3

    return 0;
}
