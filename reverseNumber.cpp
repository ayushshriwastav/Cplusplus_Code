#include <iostream>
using namespace std;

int reverseNumber(int n){

    static int reverse_number = 0;

    if (n == 0){
        return reverse_number;
    }

   
    reverse_number = reverse_number * 10 + n % 10;
    return reverseNumber(n/10);
}

int main(){

    int n;

    cout << "Enter the number : ";
    cin >> n;

    cout << "The reverse of the number is : " << reverseNumber(n) << endl;

    return 0;
}