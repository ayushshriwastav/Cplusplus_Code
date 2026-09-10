#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore(); 

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks (out of 100): ";
        cin >> marks;
    }

    char calculateGrade() {
        if (marks >= 90)
            return 'A';
        else if (marks >= 75)
            return 'B';
        else if (marks >= 60)
            return 'C';
        else if (marks >= 40)
            return 'D';
        else
            return 'F';
    }

    void display() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        cout << "---------------------------\n";
    }
};

int main() {
        Student s[3]; 

    cout << "--- Enter Details of 3 Students ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].input();
    }

    cout << "\n--- Student Results ---\n";
    for (int i = 0; i < 3; i++) {
        s[i].display();
    }


    return 0;
}
