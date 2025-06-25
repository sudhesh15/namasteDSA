//Dequeue
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(1); // Add to the back
    dq.push_front(2); // Add to the front

    // Access elements
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    // Remove elements
    dq.pop_front(); // Remove from the front
    dq.pop_back();  // Remove from the back

    // Check if deque is empty
    if (dq.empty()) {
        cout << "Deque is empty." << endl;
    } else {
        cout << "Deque is not empty." << endl;
    }

    // Size of the deque
    cout << "Size of deque: " << dq.size() << endl;
    // Add more elements
    dq.push_back(3);
    dq.push_front(4);
    dq.push_back(5);

    // Iterate through the deque
    cout << "Elements in deque: ";
    for (const auto& elem : dq) {
        cout << elem << " ";
    }
    cout << endl;

    // Clear the deque
    dq.clear();

    // Erase elements
    dq.erase(dq.begin(), dq.begin()+1); // Erase the first element
    return 0;
}