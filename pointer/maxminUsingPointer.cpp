#include <iostream>
using namespace std;

int main(){
    int size;
     
    cout << "Enter the array size: ";
    cin >> size;

    int marks[size];

    cout << "Enter the element of array: ";
    for(int i=0;i<size;i++){
        cin >> marks[i];
    }

    int *p = marks;
    int max = *p;
    int min = *p;

    for (int i =1;i<size;i++){
        if(*(p+i) > max){
            max = *(p+i);
        }
        else if(*(p+i) < min){
            min = *(p+i);
        }
    }

    cout << "Max number: " << max << endl;
    cout << "Min Number: " << min << endl;

    return 0;
}