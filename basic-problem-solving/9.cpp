//Palindrome Number
#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    if (isPalindrome(545)) {
        cout <<"Palindrome." << endl;
    } else {
        cout <<"Not a palindrome." << endl;
    }

    return 0;
}