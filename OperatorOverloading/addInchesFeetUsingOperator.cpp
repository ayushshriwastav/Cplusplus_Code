#include <iostream>
#include <cmath>
using namespace std;

class addDistance{
   float inches;
   float feet;

   public:
   addDistance(float i = 0.0f, float f = 0.0f){
    inches = i;
    feet = f;
   }

   void normalization(){
    if (inches > 12){
        feet = feet + (inches/12);
        inches = fmod(inches, 12.0f);
    }
   }

   addDistance operator+(const addDistance& c){
    addDistance temp;
    temp.inches = inches + c.inches;
    temp.feet = feet + c.feet;
    temp.normalization();
    return temp;
   }

   void displayResult(){
    cout << "The addition: " << feet << "feet" << " " << inches << "inches" << endl;
   }
};

int main(){
    addDistance d1(10,8), d2(12,6);
    addDistance d3 = d1+d2;
    d1.displayResult();
    d2.displayResult();
    d3.displayResult();
    return 0;
}