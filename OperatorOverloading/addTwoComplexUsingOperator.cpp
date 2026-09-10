#include <iostream>
using namespace std;

class Complex{
    int real, image;
    public:
    Complex(int r = 0, int img = 0){
        real = r;
        image = img;
    }

    Complex operator+(const Complex &c){
        Complex temp;
        temp.real = real + c.real;
        temp.image = image + c.image;
        return temp;
    }

    void showResult(){
        cout << "The addition of two complex number is: " << real << " + " << image << "i" << endl;
    }
};

int main(){

    Complex c1(2,3), c2(3,5);

    Complex c3 = c1+c2;

    c1.showResult();
    c2.showResult();
    c3.showResult();

    return 0;

}