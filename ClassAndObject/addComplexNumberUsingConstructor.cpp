#include <iostream>
using namespace std;


class Complex{
    private:
    float realNumber;
    float imaginaryNumber;

    public:
    Complex(float r =0, float i =0){
        realNumber = r;
        imaginaryNumber = i;
    }

   Complex addComplex(Complex c){
      Complex temp;
      temp.realNumber = realNumber + c.realNumber;
      temp.imaginaryNumber = imaginaryNumber + c.imaginaryNumber;
      return temp;
   }

   void display() {
        cout << realNumber << " + " << imaginaryNumber << "i" << endl;
    }
};


int main(){

   Complex c1(2, 3), c2(4, 5);

    cout << "Original c1: ";
    c1.display();

    Complex c3 = c1.addComplex(c2); 

    cout << "After addition, c3: ";
    c3.display();   

    cout << "c1 remains unchanged: ";
    c1.display();   

    return 0;

}