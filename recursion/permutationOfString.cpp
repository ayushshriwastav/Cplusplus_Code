#include <iostream>
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