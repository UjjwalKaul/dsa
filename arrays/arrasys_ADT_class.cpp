#include <iostream>  // Includes the input-output stream library for using cin and cout
using namespace std; // Allows using standard names like cout and cin without the std:: prefix

// Define a class named Array
class Array
{
private:
    int *A;     // Pointer to an integer, used to hold the base address of the dynamic array
    int size;   // Holds the size of the array
    int length; // Holds the number of elements in the array (not necessarily the same as the size)

public:
    // Constructor to initialize the Array class with a given size
    Array(int size)
    {
        this->size = size; // Set the size using the constructor's input parameter
        A = new int[size]; // Dynamically allocate memory for the array
    }

    // Function to create and initialize the array elements
    void create()
    {
        cout << "Enter number of elements: " << flush; // Prompt user for number of elements
        cin >> length;                                 // Input number of elements and store in 'length'
        cout << "Enter the array elements: " << endl;  // Prompt user to enter the array elements

        // Loop to input elements into the array
        for (int i = 0; i < length; i++)
        {
            cout << "Array element: " << i << " = " << flush; // Prompt for each element
            cin >> A[i];                                      // Store the input element in array A at index i
        }
    }

    // Function to display the array elements
    void display()
    {
        // Loop to print each element in the array
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " "; // Print element at index i followed by a space
        }
    }

    // Destructor to free the dynamically allocated memory
    ~Array()
    {
        delete[] A;                           // Deallocates the memory allocated for the array
        cout << "\n Array destroyed" << endl; // Prints a message indicating the array has been destroyed
    }
};

// Main function where program execution starts
int main()
{
    Array arr(10); // Create an Array object 'arr' with a size of 10
    arr.create();  // Call the create function to initialize the array with user input
    arr.display(); // Call the display function to print the array elements

    return 0; // Return 0 indicating successful execution of the program
}
