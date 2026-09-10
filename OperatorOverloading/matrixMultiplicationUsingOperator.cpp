#include <iostream>
#include <cstring>
using namespace std;

class matrixMultiplication{
  private:
  int rows, cols;
  int mat[10][10];

   public:
   matrixMultiplication(int r =0, int c =0){
    rows = r;
    cols = c;
    for(int i =0; i < rows;i++){
        for(int j=0;j<cols;j++){
            mat[i][j] = 0;
        }
    }
   }

   void input(){
    cout << "Enter the element: ";
    for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                cin >> mat[i][j];
            }
        }
   }

   void display(){
     for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
   }
   

   matrixMultiplication operator*(const matrixMultiplication& c){
    if(cols != c.rows){
         cout << "Matrix multiplication not possible!" << endl;
         return matrixMultiplication(0, 0);
    }

     matrixMultiplication result(rows, c.cols);

     for(int i=0; i<rows; i++) {
            for(int j=0; j<c.cols; j++) {
                result.mat[i][j] = 0;
                for(int k=0; k<cols; k++) {
                    result.mat[i][j] += mat[i][k] * c.mat[k][j];
                }
            }
        }

        return result;
    }
};

int main(){
    int r1, c1, r2, c2;
    cout << "Enter rows and cols of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and cols of second matrix: ";
    cin >> r2 >> c2;


    matrixMultiplication A(r1,c1), B(r2,c2); 
     A.input();
    B.input();

    cout << "\nMatrix A:\n";
    A.display();
    cout << "\nMatrix B:\n";
    B.display();

    matrixMultiplication C = A * B;  // Multiplication using overloaded *

    if (r1 > 0 && c2 > 0) {
        cout << "\nResultant Matrix (A * B):\n";
        C.display();
    }
    return 0;
}