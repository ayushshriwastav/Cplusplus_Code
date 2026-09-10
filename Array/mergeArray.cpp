#include <iostream>
using namespace std;

int main(){
    int size, size1;

    cout << "Enter the size of array: ";
    cin >> size;

    int array1[size];

    cout << "Enter first array elements: ";
    for(int i =0;i<size;i++){
        cin >> array1[i];
    }
    
    cout << "Enter the second element size: ";
    cin >> size1;

    int array2[size1];

    cout << "Enter second array elements: ";
    for(int i =0;i<size1;i++){
        cin >> array2[i];
    }

    int merged[size+size1];

    for(int i =0;i<size;i++){
        merged[i] = array1[i];
    }
     for (int i =0;i < size1;i++){
        merged[size+i] = array2[i];
     }
     
    cout << "The merged number is: ";
    for(int i =0;i<size+size1;i++){
        cout << merged[i] << " ";
    }

    return 0;
}
