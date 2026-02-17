#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long octal;
    int remainder;
    string binary = "";

    cout << "Enter the octal number: ";
    cin >> octal;

   while (octal > 0){
        remainder = octal % 10;
        octal = octal / 10;

        string temp = "";
        for (int i = 0; i < 3; i++){
            temp = char(remainder % 2 + '0') + temp;
            remainder = remainder / 2;
        }

        binary = temp + binary;
    }

    cout << "binary number is: " << binary << endl;

     while (binary.length() % 4 != 0) {
        binary = "0" + binary;
    }  
    string hexadecimal = "";

    for ( size_t i = 0; i < binary.length(); i = i + 4){
        string fourbits = binary.substr(i,4);
        int decimalValue = 0;
        for (size_t j =0; j<4;j++){
            decimalValue = decimalValue * 2 + (fourbits[j] - '0');
        }
        string hexDigit = "";
        if (decimalValue < 10){
            hexDigit = char(decimalValue + '0');
        } else {
            hexDigit = char(decimalValue - 10 + 'A');
        }
        hexadecimal = hexadecimal + hexDigit;
    }
    
    cout << "Hexadecimal number is: " << hexadecimal << endl;

}  