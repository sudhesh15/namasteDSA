// Vectors
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> arr = {1, 2, 3, 4, 5};

    // Access and print each element of the vector
    for (int i = 0; i < arr.size(); i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    // Vector operations
    // Find the size of the vector
    cout << "Size of the vector: " << arr.size() << endl;

    // Check if the vector is empty
    cout << "Is the vector empty? " << (arr.empty() ? "Yes" : "No") << endl;

    arr.push_back(6); // Add an element to the end of the vector
    arr.pop_back(); // Remove the last element from the vector

    // Access the first and last elements
    cout << "First element: " << arr.front() << endl;
    cout << "Last element: " << arr.back() << endl;

    arr.clear(); // Clear the vector

    vector<int> newArr(5, 1); // Create a new vector of size 5, initialized with 1s
    vector<int> copiedArr(newArr); // Copy the new vector

    return 0;
}