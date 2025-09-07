#include <iostream>
using namespace std;

int main(){
    string str1;

    cout << "Enter the String: ";
    getline(cin,str1);

    char *p1 = &str1[0];

    string str2(str1.size(), ' ');
    char *p2 = &str2[0];

    while(*p1 != '\0'){
        *p2 = *p1;
        p1++;
        p2++;
    }

    cout << "Copied String: " << str2;

    return 0;

}