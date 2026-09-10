// #include <iostream>
// using namespace std;

// int main(){
//     string sentence;
//     cout << "Enter the word: ";
//     getline(cin, sentence);

//     cout << sentence << endl;
    
//     string reverse = "" ;
//     for(int i = sentence.length()-1;i>=0;i--){
//         reverse = reverse + sentence[i];
//     }

//     cout << "The reverse string: " << reverse << endl;

//     if(sentence == reverse){
//         cout << "The string is palindrom" << endl;
//     }
//     else{
//         cout << "The string is not palidrom" << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    string sentence;
    cout << "Enter the word: ";
    getline(cin, sentence);

    cout << sentence << endl;
    
    string original = sentence;

    int start = 0;
    int end = sentence.length()-1;

    while(start < end){
        char temp = sentence[start];
        sentence[start] = sentence[end];
        sentence[end] = temp;

        start++;
        end--;
    }

    cout << "Reverse String: " << sentence << endl;

    if(original == sentence){
        cout << "The string is palindrom" << endl;
    }
    else{
        cout << "The string is not palidrom" << endl;
    }

    return 0;
}