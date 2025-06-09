//Search Element in given Array

#include <iostream>
#include <vector>
using namespace std;

int searchElement(const vector<int>& arr, int key) {
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == key) {
      return i;
    }
  }
  return -1;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6};
  int key = 3;
  
  int result = searchElement(arr, key);
  cout << "Index: " << result << endl;
}

// Output: Index: 2
