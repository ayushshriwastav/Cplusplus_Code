#include <iostream>
using namespace std;

int main(){
    int size;
     
    cout << "Enter the array size: ";
    cin >> size;

    int array[size];

    cout << "Enter the element of array: ";
    for(int i=0;i<size;i++){
        cin >> array[i];
    }
    
    int *p = array;

    int *start = array;
    int *end = array+size-1;

    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
    cout << "Reverse Array: ";
    for (int i = 0;i<size;i++){
        cout << array[i] << " ";
    }

    cout << endl;


    return 0;
}