#include <iostream>
using namespace std;

class Shape{
    public:
    virtual float area(){
        cout << "Base Shape area called (default 0)" << endl;
        return 0;
    }

    // virtual ~Shape(){
    //     cout << "Shape Destructor" << endl;
    // }
};

class Circle: public Shape{
    private:
    float radius; 

    public: 
    Circle(float r){
        radius = r;
    }
    float area() override{
         return 3.14f * radius * radius;
    }
};

class Rectangle: public Shape{
    private:
    float length;
    float width;

    public:
    Rectangle(float l, float w){
        length = l;
        width = w; 
    }
    float area() override{
        return length * width ;
    }
};

int main(){
    Shape *s;
    float r;
    cout << "Enter the radius: ";
    cin >> r;
    Circle c(r);
    s = &c;
    cout << "The Area of Circle: " << s->area() << endl;;

    float length, width;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
    Rectangle  rect(length,width);
    s = &rect;
    cout << "The Area of Circle: " << s->area() << endl;
    return 0;
}