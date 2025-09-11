#include <iostream>
using namespace std;

class Calculator {
public:
    // 1. Add two integers
    int add(int a, int b) {
        return a + b;
    }

    // 2. Add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // 3. Add two floating point numbers
    float add(float x, float y) {
        return x + y;
    }
};

int main() {
    Calculator calc;

    cout << "Add two integers: " << calc.add(10, 20) << endl;
    cout << "Add three integers: " << calc.add(5, 10, 15) << endl;
    cout << "Add two floats: " << calc.add(2.5f, 3.7f) << endl;

    return 0;
}
