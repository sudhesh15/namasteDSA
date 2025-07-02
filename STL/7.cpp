// STL Alogrithms 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    //Binary Search
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int key = 4;

    bool found = binary_search(arr.begin(), arr.end(), key);

    if (found) {
        cout << "Element " << key << " found in the array." << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    //getting iterator of Binary Search
    auto it = lower_bound(arr.begin(), arr.end(), key);

    //MAX & MIN
    int a = 3;
    int b = 5;
    cout<<"Maximum Element: " << max(a, b) << endl;
    cout<<"Minimum Element: " << min(a, b) << endl;

    //Swapping Elements
    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    //Sorting Elements
    sort(arr.begin(), arr.end());

    //reverse a String
    string str = "Hello";
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;

    //Rotate Elements
    vector<int> v = {1, 2, 3, 4, 5};
    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "Rotated vector: "; 
    for (const auto& elem : v) {
        cout << elem << " ";
    }

    return 0;
}