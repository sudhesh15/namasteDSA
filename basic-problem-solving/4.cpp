//Write a function that returns the smallest number in an array of integers.

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int returnSmallestElement(const vector<int>& arr) {
  int minElement  = INT_MAX;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] < minElement ) {
      minElement  = arr[i];
    }
  }
  return minElement;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6};
  
  int result = returnSmallestElement(arr);
  cout << "The smallest element is: " << result << endl;
}

// Output: The smallest element is: 6