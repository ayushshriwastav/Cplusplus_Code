#include <iostream>
using namespace std;

int main(){
    int x, y;
    int *a = &x,*b = &y;
    
    cout << "Enter first Number: ";
    cin >> *a;
    
    cout << "Enter first Number: ";
    cin >> *b;

    int temp = *a;
    *a = *b;
    *b = temp;

    cout << "The swap number is: " << *a << " "<< *b <<endl;

    return 0;

}