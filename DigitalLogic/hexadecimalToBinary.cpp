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