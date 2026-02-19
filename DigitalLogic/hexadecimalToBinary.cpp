#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string hexadecimal;
    string binary = "";

    cout << "Enter the hexadecimal number: ";
    cin >> hexadecimal;

    for ( int i =0; i < hexadecimal.length(); i++){                          // loop through each character in the hexadecimal string 
        int value;

        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9'){                  // if the character is a digit, convert it to its integer value 
            value = hexadecimal[i] - '0';                                     
        }
        else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F'){             // if the character is an uppercase letter, convert it to its integer value (A-F)
            value = hexadecimal[i] - 'A' + 10;                                
        }
        else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f'){             // if the character is a lowercase letter, convert it to its integer value (a-f)
            value = hexadecimal[i] - 'a' + 10;  
        }

        string temp = "";
        for (int j = 0; j < 4; j++){                                          // convert the integer value to its 4-bit binary representation 
            temp = char(value % 2 + '0') + temp;                              // get the least significant bit and add it to the front of the temp string 
            value = value / 2;                                                 // divide the value by 2 to get the next bit in the next iteration
        }

        binary = binary + temp;                                                // add the 4-bit binary representation of the current hexadecimal character to the final binary string                                  
    }

    cout << "Binary number is: " << binary << endl;

    return 0;
    
}



///// We can also use the following code to convert hexadecimal to binary without using string manipulation using switch and case statement 
/*
#include <iostream>
using namespace std;

int main() {
    string hex;
    cout << "Enter hexadecimal number: ";
    cin >> hex;

    string binary = "";

    for (int i = 0; i < hex.length(); i++) {

        switch (hex[i]) {
            case '0': binary += "0000"; break;
            case '1': binary += "0001"; break;
            case '2': binary += "0010"; break;
            case '3': binary += "0011"; break;
            case '4': binary += "0100"; break;
            case '5': binary += "0101"; break;
            case '6': binary += "0110"; break;
            case '7': binary += "0111"; break;
            case '8': binary += "1000"; break;
            case '9': binary += "1001"; break;
            case 'A': case 'a': binary += "1010"; break;
            case 'B': case 'b': binary += "1011"; break;
            case 'C': case 'c': binary += "1100"; break;
            case 'D': case 'd': binary += "1101"; break;
            case 'E': case 'e': binary += "1110"; break;
            case 'F': case 'f': binary += "1111"; break;
        }
    }

    cout << "Binary number is: " << binary << endl;
}
*/