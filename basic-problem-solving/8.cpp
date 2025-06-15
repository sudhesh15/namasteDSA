//count digits
#include <iostream>
using namespace std;

int getCountDigits (int digit) {
    int count = 0;

    if (digit == 0) return 1;
    
    while (digit > 0) {
        digit = digit / 10;
        count++;
    }
    return count;
}

int main() {
    cout<<getCountDigits(258);
    return 0;
}