#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int binary, decimal = 0, base = 1, remainder;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        remainder = binary % 10;      // Last digit
        decimal += remainder * base;  // Multiply with 2^position
        base = base * 2;              // Increase power of 2
        binary = binary / 10;         // Remove last digit
    }

    cout << "Decimal value = " << decimal;
    return 0;
}