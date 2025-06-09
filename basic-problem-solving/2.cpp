//Write a function that returns the number of negative numbers in an array of integers.

#include <iostream>
#include <vector>
using namespace std;

int countNegative(const vector<int>& arr) {
  int count = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] < 0) {
      count++;
    }
  }
  return count;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6};
  
  int result = countNegative(arr);
  cout << "Total Negative Count: " << result << endl;
}

// Output: Total Negative Count: 0
