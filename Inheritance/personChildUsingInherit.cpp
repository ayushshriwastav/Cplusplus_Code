#include <iostream>
using namespace std;

class Person{
    private:
    string name;
    int age;

    public: 
    void setPerson(){

        cout << "Enter the name: ";
        cin >> name;

        cout << "Enter the age: ";
        cin >> age;

    }

    void displayPerson(){
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
    }
};


class Child : public Person{
    private:
    int rollNo;
    int marks; 

    public: 
    void setChild(){
        setPerson();

        cout << "Enter the roll number: ";
        cin >> rollNo;

        cout << "Enter the marks: ";
        cin >> marks;

    }

    void displayChild(){
        displayPerson();

        cout << "roll number: " << rollNo << endl;
        cout << "marks: " <<marks << endl;

    }

};

int main(){
    Child c;
    c.setChild();
    c.displayChild();
    return 0;
}