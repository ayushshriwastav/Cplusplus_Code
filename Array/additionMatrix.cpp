#include <iostream>
using namespace std;

int main(){
    int row, col;
    cout << "Enter the row: ";
    cin >> row;

    cout << "Enter the column: ";
    cin >> col;

    int A[row][col], B[row][col], C[row][col];

    cout << "Enter the element of A matrix: ";
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> A[i][j];
        }
    }

    cout << "Enter the element of B matrix: ";
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> B[i][j];
        }
    }

    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
             C[i][j] = A[i][j]+B[i][j];
        }
    }

    cout << "The Addition of A and B matrix are C Matrix and Elements are: ";
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
             cout << C[i][j] << "  ";
        }
    }
    cout << endl;

    return 0;
}