#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int binary, decimal = 0, remainder, base = 1;

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
     remainder = decimal % 8;
        octal = octal + remainder * power;
        power = power * 10;
        decimal = decimal / 8;
        
    }

    cout << "The octal Number is : " << octal << endl;
}
