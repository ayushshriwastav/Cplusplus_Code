#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int decimal, binary = 0, base =1 , remainder;

    cout << "Enter the decimal number: ";
    cin >> decimal;

    while(decimal > 0){
        remainder = decimal % 2;
        binary = binary + remainder * base;
        base = base * 10;
        decimal = decimal / 2;
    }

    cout << "Binary number is: " << binary << endl;

}  