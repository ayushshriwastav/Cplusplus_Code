#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string hexadecimal;
    long long decimal = 0;

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

        decimal = decimal * 16 + value;                                         // accumulate the decimal value by multiplying by 16 and adding the current value
    }

    cout << "Decimal number is: " << decimal << endl;

    return 0;
    
}



///// We can also use the following code to convert hexadecimal to binary without using string manipulation using switch and case statement 
/*
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string hexadecimal;
    long long decimal = 0;

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

        decimal = (decimal << 4) + value;                                         // accumulate the decimal value by multiplying by 16 and adding the current value
    }

    cout << "Decimal number is: " << decimal << endl;

    return 0;
    
}
*/