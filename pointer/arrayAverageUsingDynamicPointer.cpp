#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter the student number: ";
    cin >> number;

    int *marks = new int[number];

    cout << "Enter the marks of " << number << "students: ";
    for(int i=0;i<number;i++){
        cin >> marks[i];
    }

    int sum =0;
    for(int i =0;i<number;i++){
        sum = sum+marks[i];
    }

    double average = double(sum)/number;
    
    cout << "The average is: " << average << endl;

    delete[] marks;

    return 0;

}