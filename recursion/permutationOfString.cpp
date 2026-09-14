/*#include <iostream>
#include <string>
using namespace std;

void permutations(string str, string result, int r = 1)
{
    // Base condition
    if (result.length() == r)
    {
        cout << "[" << result << "]" << endl;
        return;
    }

    // chose the each character one by one and find the remaining string
    for (int i = 0; i < str.length(); i++)
    {
        char current_string = str[i];

        // remove current character from the string to find the remaining string
        string remaining_string = "";

        for (int j = 0; j < str.length(); j++)
        {
            if (j != i)
            {
                remaining_string = remaining_string + str[j];
            }
        }

        // add current character to the result and find the permutations of the remaining string
        permutations(remaining_string, result + current_string, r);
    }
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int r;
    cout << "Enter the length of the permutation: ";
    cin >> r;

    if(r >str.length() || r <= 0){
        cout << "Invalid length of permutation" << endl;
        return 0;
    }

    permutations(str, "",r);

    return 0;
}
*/


// Permutation of String using character array by recursion

#include <iostream>
#include <cstring>
using namespace std;

void permutationOfString(char str[], char result[], int index = 0, int r =1){

    // Base Condition
    if (index == r){

        cout << "[";
    for(int i = 0; i< r;i++){
        cout << result[i];
    }
    
        cout << "]" << endl;
        return;
    }

    // chose the each character one by one and find the remaining string
    for (int i = 0; str[i]!= '\0'; i++){

        char current_string = str[i];


        char remaining_string[100];
        int k = 0;

        for (int j = 0; str[j] != '\0'; j++){

            if (j != i){
                remaining_string[k++] = str[j];
            }
        }

        remaining_string[k] = '\0'; // Null-terminate the remaining string  

        // add current character to the result and find the permutations of the remaining string
        result[index] = current_string;
        permutationOfString(remaining_string, result, index + 1, r);
    }
};

int main(){

    //const int MAX = 100;
    
    int n;
    cout << "Enter the length of the string: ";
    cin >> n;

    if (n <= 0 || n > n+1){
        cout << "Invalid string length" << endl;
        return 0;
    }

    char str[n+1];
    cout << "Enter a string: "; 

    for (int i = 0; i < n; i++){

        cin >> str[i];
    }

    str[n] = '\0'; // Null-terminate the string

    int r;
    cout << "Enter the length of the permutation: ";
    cin >> r;

    if(r > strlen(str) || r <= 0){
        cout << "Invalid length of permutation" << endl;
        return 0;
    }

    char result[100];
    permutationOfString(str, result, 0, r);

    return 0;
}