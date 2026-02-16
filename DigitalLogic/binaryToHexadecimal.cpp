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

    cout << "Decimal value = " << decimal << endl;
    
    string hexadecimal = " ";

    while (decimal > 0) {
        
        int remainder = decimal % 16;
        if ( remainder > 10)
        {
            hexadecimal = char(remainder - 10 + 'A') + hexadecimal;
        }
        else
        {
            hexadecimal = char(remainder + '0') + hexadecimal;
        }
        decimal = decimal / 16;
    }

    cout << "Hexadecimal value = " << hexadecimal << endl;
}