#include <iostream>
using namespace std;

// Pattern 1: Solid Square
/*
* * * * 
* * * * 
* * * * 
* * * * 
*/
void patternSolidSquare(int n) {
    for (int i = 0; i < n; i++) {
        string row = "";
        for (int j = 0; j < n; j++) {
            row += "* ";
        }
        cout << row << endl;
    }
}

// Pattern 2: Left Aligned Triangle
/*
* 
* * 
* * * 
* * * * 
*/
void patternLeftAlignedTriangle(int n) {
    for (int i = 0; i < n; i++) {
        string row = "";
        for (int j = 0; j <= i; j++) {
            row += "* ";
        }
        cout << row << endl;
    }
}

// Pattern 3: Increasing Numbers in Row
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
void patternIncreasingNumbers(int n) {
    for (int i = 0; i < n; i++) {
        string row = "";
        for (int j = 1; j <= i + 1; j++) {
            row += to_string(j) + " ";
        }
        cout << row << endl;
    }
}

// Pattern 4: Repeating Row Numbers
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
void patternRepeatingRowNumbers(int n) {
    for (int i = 0; i < n; i++) {
        string row = "";
        for (int j = 0; j <= i; j++) {
            row += to_string(i + 1) + " ";
        }
        cout << row << endl;
    }
}

// Pattern 5: Reverse Increasing Numbers
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
void patternReverseIncreasingNumbers(int n) {
    for (int i = 0; i < n; i++) {
        string row = "";
        for (int j = 1; j <= n - i; j++) {
            row += to_string(j) + " ";
        }
        cout << row << endl;
    }
}

// Pattern 6: Reverse Stars
/*
* * * * *
* * * *
* * *
* *
*
*/
void patternReverseStars(int n) {
    for (int i = 0; i < n; i++) {
        string row = "";
        for (int j = 0; j < n - i; j++) {
            row += "* ";
        }
        cout << row << endl;
    }
}

// Pattern 7: Right Aligned Triangle
/*
        *
      * *
    * * *
  * * * *
* * * * *
*/
void patternRightAlignedTriangle(int n) {
    for (int i = 0; i < n; i++) {
        string row = "";
        for (int j = 0; j < n - i - 1; j++) {
            row += "  "; // Two spaces for alignment with "* "
        }
        for (int k = 0; k <= i; k++) {
            row += "* ";
        }
        cout << row << endl;
    }
}

int main() {
    int n = 5;

    cout << "Pattern 1: Solid Square\n"; patternSolidSquare(n);
    cout << "\nPattern 2: Left Aligned Triangle\n"; patternLeftAlignedTriangle(n);
    cout << "\nPattern 3: Increasing Numbers\n"; patternIncreasingNumbers(n);
    cout << "\nPattern 4: Repeating Row Numbers\n"; patternRepeatingRowNumbers(n);
    cout << "\nPattern 5: Reverse Increasing Numbers\n"; patternReverseIncreasingNumbers(n);
    cout << "\nPattern 6: Reverse Stars\n"; patternReverseStars(n);
    cout << "\nPattern 7: Right Aligned Triangle\n"; patternRightAlignedTriangle(n);

    return 0;
}
