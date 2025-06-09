//Write a function that returns the largest number in an array of integers.

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int returnLargestElement(const vector<int>& arr) {
  int maxElement = INT_MIN;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > maxElement) {
      maxElement = arr[i];
    }
  }
  return maxElement;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6};
  
  int result = returnLargestElement(arr);
  cout << "The largest element is: " << result << endl;
}

// Output: The largest element is: 6