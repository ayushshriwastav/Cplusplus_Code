#include <iostream>
using namespace std;

// -------- University Class --------
class University {
protected:
    string uniName;
    string uniLocation;

public:
    void inputUniversity() {
        cout << "Enter University Name: ";
        getline(cin, uniName);
        cout << "Enter University Location: ";
        getline(cin, uniLocation);
    }

    void displayUniversity() {
        cout << "\n--- University Details ---" << endl;
        cout << "University Name: " << uniName << endl;
        cout << "University Location: " << uniLocation << endl;
    }
};

// -------- College Class (Derived from University) --------
class College : public University {
protected:
    string collegeName;
    string collegeCode;

public:
    void inputCollege() {
        inputUniversity();
        cout << "\nEnter College Name: ";
        getline(cin, collegeName);
        cout << "Enter College Code: ";
        getline(cin, collegeCode);
    }

    void displayCollege() {
        displayUniversity();
        cout << "\n--- College Details ---" << endl;
        cout << "College Name: " << collegeName << endl;
        cout << "College Code: " << collegeCode << endl;
    }
};

// -------- Student Class (Derived from College) --------
class Student : public College {
private:
    string studentName;
    int rollNo;
    string course;

public:
    void inputStudent() {
        inputCollege();
        cout << "\nEnter Student Name: ";
        getline(cin, studentName);
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore(); // To ignore newline left by cin
        cout << "Enter Course: ";
        getline(cin, course);
    }

    void displayStudent() {
        displayCollege();
        cout << "\n--- Student Details ---" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};

// -------- Main Function --------
int main() {
    Student s;

    // Input Data
    s.inputStudent();
    s.displayStudent();

    return 0;
}
