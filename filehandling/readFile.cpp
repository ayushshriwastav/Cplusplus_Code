#include <iostream>
#include <fstream>
#include <filesystem>
using namespace std;

int main() {
    ifstream fin("test.txt");
    string line;

    // file open check
    if (!fin) {
        cout << "Error: File not found!\n";
        cout << "Current Path: " << filesystem::current_path();
        return 1;
    }

    cout << "File Content:\n";

    while (getline(fin, line)) {
        cout << line << endl;
    }

    cout << "\nCurrent Path: " << filesystem::current_path();

    fin.close();
    return 0;
}