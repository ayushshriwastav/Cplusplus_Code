#include <iostream>
using namespace std;

int main(){
    string word;
    cout << "Enter the word: ";
    getline(cin, word);

    cout << word << endl;

    int consonent =0, vowels =0;
    for (int i =0;i<word.length();i++){
        char ch = word[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ){
            if(ch =='a' || ch =='e' || ch=='i'  || ch=='o' || ch=='u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            vowels++;               
        }
        else{
            consonent++;
        }
     } 
    }
    
    cout << "Vowels: " << vowels << endl;
    cout << "Consonents: " << consonent << endl;

    return 0;
}