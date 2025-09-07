#include <iostream>
using namespace std;

int main(){
    int row1, col1, row2, col2;

    cout << "Enter the row and colun of first matrix: ";
    cin >> row1 >> col1;

    cout << "Enter the row and colum of second matrix: ";
    cin >> row2 >> col2;

    if(col1 != row2){
        cout << "The Multiplication is not possible" << endl;
        return 0;
    }

    //dynamic allocation for first matrix
    int **A = new int*[row1];
    for (int i =0;i<row1;i++){
        A[i] = new int[col1];
    }

    /// dynamic allocation for second matrix 
     int **B = new int*[row2];
    for (int i =0;i<row2;i++){
        B[i] = new int[col2];
    }

    //dynamci allocation for third matrix
     int **C = new int*[row1];
    for (int i =0;i<row1;i++){
        C[i] = new int[col2];
    }

    cout << "Enter the element of first matrix: ";
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin >> *(*(A+i) +j);
        }
    }

    cout << "Enter the element of second matrix: ";
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin >> *(*(B+i) +j);
        }
    }

    //initialize c with 0;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
             *(*(C+i) +j) = 0;
        }
    }

    
}