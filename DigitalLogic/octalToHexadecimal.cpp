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
    }                                                            // convert first octal to binary 

    cout << "binary number is: " << binary << endl;

     while (binary.length() % 4 != 0) {
        binary = "0" + binary;
    }                                                            // add leading zero to make the length of binary a multiple of 4
    string hexadecimal = "";

    for ( size_t i = 0; i < binary.length(); i = i + 4){              // convert every 4 bits to hexadecimal 
        string fourbits = binary.substr(i,4);                          // get 4 bits 
        int decimalValue = 0;
        for (size_t j =0; j<4;j++){                                   // convert 4 bits to decimal 
            decimalValue = decimalValue * 2 + (fourbits[j] - '0');     // convert chr '0' or '1' to int 0 or 1 and calculate the decimal value 
        }
        string hexDigit = "";
        if (decimalValue < 10){
            hexDigit = char(decimalValue + '0');
        } else {
            hexDigit = char(decimalValue - 10 + 'A');                 // convert decimal value 10-15 to hexadecimal digit A-F
        }
        hexadecimal = hexadecimal + hexDigit;
    }
    
    cout << "Hexadecimal number is: " << hexadecimal << endl;

}  