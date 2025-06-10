//Write a function that returns the Second largest number in an array of integers.

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int returnSecondLargestElement(const vector<int>& arr) {
  int firstLargest = INT_MIN;
  int secondLargest = INT_MIN;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > firstLargest) {
      secondLargest = firstLargest;
      firstLargest = arr[i];
    } else if (arr[i] > secondLargest && arr[i] < firstLargest) {
      secondLargest = arr[i];
    }
  }
  return secondLargest;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6};
  
  int result = returnSecondLargestElement(arr);
  cout << "The second largest element is: " << result << endl;
}

// Output: The second largest element is: 5