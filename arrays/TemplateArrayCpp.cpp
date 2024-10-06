#include <bits/stdc++.h>
using namespace std;

// Template class Array to handle arrays of different data types
template <class T>
class Array
{
private:
    T *A;       // Pointer to hold the base address of the array
    int size;   // Size of the array (maximum capacity)
    int length; // Number of elements currently in the array

public:
    // Default constructor to initialize the array with size 10
    Array()
    {
        A = new T[10]; // Allocate memory for 10 elements
        size = 10;
        length = 10; // Length set to 10 (array is full initially)
    }

    // Parameterized constructor to initialize the array with a given size
    Array(int sz)
    {
        size = sz;       // Set the size to the given value
        length = 0;      // Initially, the array is empty
        A = new T[size]; // Allocate memory for the given size
    }

    // Destructor to free the allocated memory
    ~Array()
    {
        delete[] A; // Free the dynamically allocated memory
    }

    // Function to display the elements of the array
    void Display();

    // Function to insert an element at a specific index
    void Insert(int index, T element);

    // Function to delete an element at a specific index and return the deleted element
    T Delete(int index);
};

// Function to display all elements of the array
template <class T>
void Array<T>::Display()
{
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " "; // Print each element
    }
    cout << endl;
}

// Function to insert an element at the given index
template <class T>
void Array<T>::Insert(int index, T element)
{
    // Check if the index is valid and within the bounds of the current length
    if (index >= 0 && index <= length)
    {
        // Shift elements to the right to make space for the new element
        for (int i = length - 1; i >= index; i--)
        {
            A[i + 1] = A[i];
        }
        A[index] = element; // Insert the new element at the given index
        length++;           // Increment the length since a new element is added
    }
}

// Function to delete an element from the array and return the deleted element
template <class T>
T Array<T>::Delete(int index)
{
    // Check if the index is valid and within bounds
    if (index >= 0 && index < length)
    {
        T x = A[index]; // Store the element to be deleted
        // Shift elements to the left to fill the gap
        for (int i = index; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        length--; // Decrease the length since an element is deleted
        return x; // Return the deleted element
    }
}

int main()
{
    Array<int> arr(10); // Create an integer array of size 10

    // Insert elements into the array
    arr.Insert(0, 5);  // Insert 5 at index 0
    arr.Insert(1, 6);  // Insert 6 at index 1
    arr.Insert(2, 9);  // Insert 9 at index 2
    arr.Insert(3, 10); // Insert 10 at index 3

    arr.Display(); // Output: 5 6 9 10

    // Delete the element at index 2 and print the deleted element
    cout << "Deleted " << arr.Delete(2) << endl; // Output: Deleted 9

    arr.Display(); // Output: 5 6 10

    return 0;
}
