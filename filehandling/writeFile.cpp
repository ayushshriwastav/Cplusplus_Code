#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;

    fout.open("test.txt");   // file open (write mode)

    fout << "Hello Ayush\n";
    fout << "C++ File Handling\n";

    fout.close();  // file close

    cout << "Data successfully written!";
    return 0;
}