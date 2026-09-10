#include <iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the element : ";
    for(int i =0;i<size;i++){
        cin >> arr[i];
    }

    cout << "The Entered Elements: ";

    for(int i = 0; i<size;i++){
        cout << arr[i] << ' ';
    }
    cout << endl;

    cout << "Reverse Number: ";
    
    for(int j = size-1; j>= 0; j--){
        cout << arr[j] << ' ';
    }

    int max = arr[0];
    int min = arr[0];
    for (int i =0;i<size;i++){
        if (arr[i] >= max){
            max = arr[i];
        }
        else if (arr[i] < min){
            min = arr[i];
        }
    }
    cout << endl;
    cout << "The max value : " << max << '\n'; 
    cout << "The min value : " << min << '\n'; 
    cout << endl;

    return 0;
}