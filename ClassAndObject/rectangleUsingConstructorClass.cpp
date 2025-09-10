#include <iostream>
using namespace std;

class Rectangle{
    private: 
    float length;
    float breath;

    public:
    Rectangle(float l, float b){
        length = l;
        breath = b;
    }

    float area(){
        return length * breath;

    }

      void display() {
        cout << "Length: " << length << ", Breadth: " << breath << endl;
        cout << "Area of Rectangle: " << area() << endl;
    }
};

int main(){
    float l, b;
    cout << "Enter the length: ";
    cin >> l;

    cout << "Enter the breath: ";
    cin >> b;

    Rectangle area(l,b);

    area.display();

    return 0;

}