#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int decimal, octal = 0, base =1 , remainder;

    cout << "Enter the decimal number: ";
    cin >> decimal;

    while(decimal > 0){
        remainder = decimal % 8;
        octal = octal + remainder * base;
        base = base * 10;
        decimal = decimal / 8;
    }

    cout << "Octal number is : " << octal << endl;

}  