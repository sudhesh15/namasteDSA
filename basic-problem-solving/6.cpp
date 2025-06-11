//Loop inside loop

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == j) {
                cout << i << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}

// Output:
// 1 0 0 0 0
// 0 2 0 0 0
// 0 0 3 0 0
// 0 0 0 4 0
// 0 0 0 0 5