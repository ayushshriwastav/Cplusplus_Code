#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter the number: ";
    cin >> number;

    string *name = new string[number];
    
    cout << "Enter the name: ";
    for(int i =0;i< number;i++){
        cin >> name[i];
    }

    cout << "The student name is: ";
    for(int i =0;i<number;i++){
        cout << name[i] << " "; 
    }

    cout << endl;

    delete[] name;

    return 0;
}