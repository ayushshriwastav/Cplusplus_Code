#include <iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter size of first array: ";
    cin >> size;

    int array1[size];

    cout << "Enter the element of first array: ";
    for (int i =0;i<size;i++){
        cin >> array1[i];
    }
    
    int *a = array1;

    int array2[size];

    cout << "Enter the element of second array: ";
    for (int i =0;i<size;i++){
        cin >> array2[i];
    }
    
    int *b = array2;
    
    for(int i =0;i<size;i++){
        int temp = *(a+i);
         *(a+i) = *(b+i);
         *(b+i) = temp;
    }
   

    cout << "Swapped A: " ;
    for (int i =0;i<size;i++){
        cout << array1[i] << " ";
    }

    cout << endl;

    cout << "Swapped B: " ;
    for (int i =0;i<size;i++){
        cout << array2[i] << " ";
    }

    cout << endl;

    return 0;

}