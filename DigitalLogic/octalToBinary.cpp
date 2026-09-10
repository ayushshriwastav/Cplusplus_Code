#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long octal;
    int remainder;
    string binary = "";

    cout << "Enter the octal number: ";
    cin >> octal;

    while(octal > 0){
        remainder = octal % 10;
        octal = octal / 10;

        string temp = "";
        for (int i = 0; i < 3; i++){
            temp = char(remainder % 2 + '0') + temp;
            remainder = remainder / 2;
        }

        binary = temp + binary;
    }

    cout << "Binary number is: " << binary << endl;

    return 0;
    
}