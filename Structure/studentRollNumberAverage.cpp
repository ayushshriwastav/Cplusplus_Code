#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll_number;
    int marks[3];
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];

    // Input details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";

        cout << "Name: ";
        cin >> students[i].name;

        cout << "Roll Number: ";
        cin >> students[i].roll_number;

        cout << "Enter marks in 3 subjects: ";
        for (int j = 0; j < 3; j++) {
            cin >> students[i].marks[j];
        }
    }

    // Output with average
    cout << "\nStudent Details with Average Marks:\n";
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += students[i].marks[j];
        }
        float avg = sum / 3.0;

        cout << "Name: " << students[i].name
             << ", Roll Number: " << students[i].roll_number
             << ", Average Marks: " << avg << endl;
    }

    return 0;
}
