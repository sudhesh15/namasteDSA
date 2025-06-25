//List
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList;
    myList.push_back(1); // Add to the end
    myList.push_front(2); // Add to the front

    // Access elements
    cout << "First element: " << myList.front() << endl;
    cout << "Last element: " << myList.back() << endl;

    // Remove elements
    myList.pop_front(); // Remove from the front
    myList.pop_back();  // Remove from the back

    // Check if list is empty
    if (myList.empty()) {
        cout << "List is empty." << endl;
    } else {
        cout << "List is not empty." << endl;
    }

    // Size of the list
    cout << "Size of list: " << myList.size() << endl;

    // Add more elements
    myList.push_back(3);
    myList.push_front(4);
    myList.push_back(5);

    // Iterate through the list
    cout << "Elements in list: ";
    for (const auto& elem : myList) {
        cout << elem << " ";
    }
    cout << endl;

    // Clear the list
    myList.clear();

    // Erase elements
    myList.erase(myList.begin());
    return 0;
}