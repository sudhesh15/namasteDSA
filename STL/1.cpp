// Arrays
#include <iostream>
#include <array>
using namespace std;

int main() {
    // Declare an array of integers with 5 elements
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // Access and print each element of the array
    for (int i = 0; i < arr.size(); i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    // Array operations
    // Find the size of the array
    cout << "Size of the array: " << arr.size() << endl;

    // Check if the array is empty
    cout << "Is the array empty? " << arr.empty() << endl;
    
    // Access the first and last elements
    cout << "First element: " << arr.front() << endl;
    cout << "Last element: " << arr.back() << endl;

    return 0;
}