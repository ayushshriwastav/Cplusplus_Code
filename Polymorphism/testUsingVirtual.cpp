#include <iostream>
using namespace std;

class Base{
    public:
    virtual void display(){
        cout << "Base Class \n";
    }
};

class Derived : public Base{
    public:
    void display(){
      //  Base::display();
        cout << "Derived Class \n";
    }
};

class Derived1 : public Base{
    public:
    // void display(){
    //   //  Base::display();
    //     cout << "Derived 1 Class \n";
    // }
};

int main(){
    Base *B;
    Derived D;
    B = &D;
    B -> display();
    
    Derived1 D1;
    B = &D1;
    B -> display();
    return 0;
}