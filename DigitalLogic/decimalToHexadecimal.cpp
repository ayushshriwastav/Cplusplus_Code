#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long int decimal;
    int  remainder;

    cout << "Enter the decimal number: ";
    cin >> decimal;

    string Hexadecimal = " ";
    
    while(decimal > 0){
        remainder = decimal % 16;
        if (remainder >= 10){
            Hexadecimal = char(remainder - 10 + 'A') + Hexadecimal;
        }
        else {
            Hexadecimal = char(remainder + '0') + Hexadecimal;
        }
        decimal = decimal / 16; 
    }

    cout << "Hexadecimal number is : " << Hexadecimal << endl;

}  