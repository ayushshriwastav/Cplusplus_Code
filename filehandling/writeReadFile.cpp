#include <iostream>
#include <fstream>
#include <filesystem>
using namespace std;

int main() {
    fstream file;
    string data;

    // -----------Write to file-----------

    file.open("data.txt", ios::out);  // write

    if(!file){
        cout << "Error opening file for writing." << endl;
        return 1;
    }

    file << "Welcome to C++\n";
    file.close();


    // -----------Read from file-----------
    file.open("data.txt", ios::in);   // read

    if(!file){
        cout << "Error opening file for reading." << endl;
        return 1;
    }

    while(getline(file, data)) {
        cout << data << endl;
    }

    file.close();


    // -----------Append to file-----------
    file.open("data.txt", ios::app); // append

    if(!file){
        cout << "Error opening file for appending." << endl;
        return 1;
    }
    file << "File handling in C++ is easy!\n";

    file.close();

    // -----------Read Again from file-----------
    file.open("data.txt", ios::in);   // read again to show appended data
    if(!file){
        cout << "Error opening file for reading again." << endl;
        return 1;
    }
    
    cout << "\nAfter appending new data:\n";

    while(getline(file, data)) {
        cout << data << endl;
    }

    file.close();

    //-----------Delete the data in the file-----------
    file.open("data.txt", ios::out | ios::trunc); // open in write mode with truncation to delete existing content
    if(!file){
        cout << "Error opening file for deleting content." << endl;
        return 1;
    }

    cout << "\nFile content deleted successfully.\n";

    file.close();


    // -----------Read Again from file-----------
    file.open("data.txt", ios::in);   // read again to show appended data
    if(!file){
        cout << "Error opening file for reading again." << endl;
        return 1;
    }

    if(getline(file, data)) {
        cout << data << endl;
    } else {
        cout << "File is empty.\n";
    }

    file.close();

    // Display current working directory
    cout << "Current Path: " << filesystem::current_path() << endl;
    file.close();
    return 0;
}