#include <iostream>
using namespace std;

class Area {
public:
    // Circle का Area (πr²)/////////////////
    float calculate(float radius) {
        return 3.1416f * radius * radius;
    }

    // Rectangle का Area (l × b)////////
    float calculate(float length, float breadth) {
        return length * breadth;
    }

    // Triangle का Area (½ × b × h) /////////
    float calculate(int base, int height) {
        return 0.5f * base * height;
    }
};

int main() {
    Area a;

    cout << "Area of Circle (r=5): " << a.calculate(5.0f) << endl;
    cout << "Area of Rectangle (l=4, b=6): " << a.calculate(4.0f, 6.0f) << endl;
    cout << "Area of Triangle (b=8, h=10): " << a.calculate(8, 10) << endl;

    return 0;
}
