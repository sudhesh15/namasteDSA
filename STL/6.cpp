//maps
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    map<int, string> m;
    m[1] = "One";
    m[2] = "Two";
    m[3] = "Three";

    // Access elements
    cout << "Element with key 1: " << m[1] << endl;

    // Iterate through the map
    cout << "Elements in the map: ";
    for (const auto& pair : m) {
        cout << pair.first << " -> " << pair.second << ", ";
    }

    // Check if a key exists
    if (m.find(2) != m.end()) {
        cout << "\nKey 2 exists in the map." << endl;
    } else {
        cout << "\nKey 2 does not exist in the map." << endl;
    }

    // Remove an element
    m.erase(2);

    // Unordered map
    unordered_map<int, string> um;
    um[1] = "One";
    um[2] = "Two";  
    um[3] = "Three";

    // Access elements
    cout << "Element with key 1 in unordered_map: " << um[1] << endl;   

    // Iterate through the unordered map
    cout << "Elements in the unordered_map: ";
    for (const auto& pair : um) {
        cout << pair.first << " -> " << pair.second << ", ";
    }

    // Check if a key exists
    if (um.find(2) != um.end()) {
        cout << "\nKey 2 exists in the unordered_map." << endl;
    } else {
        cout << "\nKey 2 does not exist in the unordered_map." << endl;
    }

    // Remove an element
    um.erase(2);

    // Clear the map
    m.clear();
    um.clear();
    cout << "Maps cleared." << endl;
    
    return 0;
}