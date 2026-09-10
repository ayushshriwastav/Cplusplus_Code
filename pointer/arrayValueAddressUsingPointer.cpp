#include <iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    int array[size];

    cout << "Enter the element of first array: ";
    for (int i =0;i<size;i++){
        cin >> array[i];
    }
    
    int *a = array;

    cout << "Address of Array: ";
    for(int i =0;i<size;i++){
        cout << a+i << " ";
    }

    cout << endl;

    cout << "value of Array: ";
    for(int i =0;i<size;i++){
        cout << *(a+i) << " ";
    }

    cout << endl;

    return 0;

}