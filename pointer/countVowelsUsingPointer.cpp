#include <iostream>
using namespace std;

int main(){
    string word;

    cout << "Enter the word: ";
    getline(cin, word);


    char *p = &word[0];
    int vowels = 0;
    int consonent = 0;
    for (;*p != '\0';p++){
        char ch = *p;
        if(*p != ' '){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'o' || ch == 'U'){
                vowels++;
            }
            else{
                consonent++;
            }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "consonent: " << consonent << endl;

    
    return 0;
}