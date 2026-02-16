#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int binary, decimal = 0, base = 1, remainder;

    cout << "Enter a binary number: ";
    cin >> binary;
    
     while (binary > 0) {
        remainder = binary % 10;      
        decimal = decimal + remainder * base;  
        base = base * 2;              
        binary = binary / 10;         
    }
    
    cout << "The decimal Number is : " << decimal << endl;

    int octal = 0, power = 1;
    while (decimal > 0) {
        octal = octal + (decimal % 8) * power;
        decimal = decimal /8;
        power = power * 10;
    }

    cout << "The octal Number is : " << octal << endl;
}
