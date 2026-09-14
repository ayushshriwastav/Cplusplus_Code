#include <iostream>
using namespace std;


int mystrlen(const char str[]){
    int count = 0;

    while(str[count] != '\0'){
        count++;
    }
    return count;
}

int printSubstrings(string str, int start, int end)
{
    // Base condition
    if (start == str.length())
    {
        return 0;
    }

    // under end string length
    if (end < str.length())
    {
        cout << "[";
        // print the start and end index of the string
        for (int i = start; i <= end; i++)
        {
            cout << str[i];

            if(i < end){
                cout << ",";
            }
        }
        cout << "]" << endl;

        // increase the end index to print the next substring
        return 1 + printSubstrings(str, start, end + 1);
    }
    else
    {
        // move to the next starting position
        return printSubstrings(str, start + 1, start + 1);
    }
};

int main()
{
   string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int totalSubsting = printSubstrings(str, 0, 0);

    cout << "Total number of substrings: " << totalSubsting << endl;

    return 0;
}




/*
#include <iostream>
using namespace std;


int mystrlen(const char str[]){
    int count = 0;

    while(str[count] != '\0'){
        count++;
    }
    return count;
}

int printSubstrings(char str[], int start, int end)
{
    // Base condition
    if (start == mystrlen(str))
    {
        return 0;
    }

    // under end string length
    if (end < mystrlen(str))
    {
        cout << "[";
        // print the start and end index of the string
        for (int i = start; i <= end; i++)
        {
            cout << str[i];

            if(i < end){
                cout << ",";
            }
        }
        cout << "]" << endl;

        // increase the end index to print the next substring
        return 1 + printSubstrings(str, start, end + 1);
    }
    else
    {
        // move to the next starting position
        return printSubstrings(str, start + 1, start + 1);
    }
};

int main()
{
    int n;

    cout << "Enter the length of the string: ";
    cin >> n;  
    
    if (n <= 0 || n > n+1){
        cout << "Invalid string length" << endl;
        return 0;
    }

    char str[n+1] ;

    cout << "Enter a string: ";
    for (int i = 0; i < n; i++){
        cin >> str[i];
    }

    str[n] = '\0'; // Null-terminate the string

    int totalSubsting = printSubstrings(str, 0, 0);

    cout << "Total number of substrings: " << totalSubsting << endl;

    return 0;
}

*/