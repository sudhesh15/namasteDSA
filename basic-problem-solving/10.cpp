//Reveerse a Number
#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;

    while (num > 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return reversed;
}

int main() {
    cout<<"Reversed Number is "<<reverseNumber(123);
    return 0;
}