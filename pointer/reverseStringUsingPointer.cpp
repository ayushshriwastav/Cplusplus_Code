#include <iostream>
using namespace std;

int main(){
    string sentence;

    cout << "Enter the string: ";
    getline(cin, sentence);

    char *start = &sentence[0];
    char *end = &sentence[sentence.length()-1];

    while (start < end){
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "The reverse string: " << sentence << endl;

    return 0;

}