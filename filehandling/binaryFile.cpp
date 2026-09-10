#include <iostream>
#include <fstream>
using namespace std;


int main() {
    
    char name[20]= "Ayush";

    ofstream fout;

    fout.open("data.bin", ios::binary);
    fout.write((char*)&name, sizeof(name));
    fout.close();

    char s2[20];

    ifstream fin;
    fin.open("data.bin", ios::binary);
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    cout << s2 << endl; 
    return 0;
}