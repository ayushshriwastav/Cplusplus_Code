#include <iostream>
using namespace std;

int main(){
    string sentence;
    cout << "Enter the word: ";
    getline(cin, sentence);

    cout << sentence << endl;

    int count=0;
    bool inWord = false;

    for (int i =0;i<sentence.length();i++){
                if(sentence[i] != ' ' && !inWord){
                    inWord = true;
                     count++;
                }
                else if(sentence[i] == ' '){
                    inWord = false;
              }
            }
      
    
    cout << "Word Count: " << count << endl;

    return 0;
}