//Sets
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(5);
    s.insert(1);
    s.insert(1);

    // Access elements
    cout << "Elements in the set: ";
    for (const auto& elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    s.erase(1); // Remove an element

    // unordered_set
    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(5);

    // Access elements
    cout << "Elements in the unordered_set: ";
    for (const auto& elem : us) {
        cout << elem << " ";
    }
    cout << endl;

    us.erase(1); // Remove an element
    
    // Check if an element exists
    cout << "Does 2 exist in unordered_set? " << us.count(2) << endl;


    return 0;
}