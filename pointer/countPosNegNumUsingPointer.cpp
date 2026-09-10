#include <iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    int array[size];

    cout << "Enter the element: ";
    for(int i =0;i<size;i++){
        cin >> array[i];
    }

    int *p = array;

    int countPositive = 0;
    int countNegative =0;

    for(int i =0;i<size;i++){
        if(*(p+i) > -1){
            countPositive++;
        }
        else if(*(p+i) <= -1){
            countNegative++;
        }
    }

    cout << "Positive Count: " << countPositive << endl;
    cout << "Negative Count: " << countNegative << endl;
    return 0;
}