#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int octal, remainder, base = 1;
    int decimal = 0;

    cout << "Enter the octal number: ";
    cin >> octal;

    while(octal > 0){
        remainder = octal % 10;
        decimal = decimal + remainder * base;
        base = base * 8;
        octal = octal / 10;
    }

    cout << "decimal number is: " << decimal << endl;

}  