#include <iostream>
using namespace std;

struct Library{
    int bookId;
    string title;
    string status;
};

void displayBooks(int number, Library library[]);
void issueBooks(int number, Library library[], int id);
void returnBooks(int number, Library library[], int id);


void displayBooks(int number, Library library[]){
    for (int i =0; i< number; i++){
        cout << "Library Book " << i+1 << endl;
        cout << "ID: " << library[i].bookId << endl;
        cout << "the book title: " << library[i].title << endl;
        cout << "Status: " << library[i].status << endl;

    }
};

void issueBooks(int number, Library library[], int id) {
    bool found = false;
    for (int i = 0; i < number; i++) {
        if (library[i].bookId == id) {
            found = true;
            if (library[i].status == "Available") {
                library[i].status = "Issued";
                cout << "Book \"" << library[i].title << "\" has been issued.\n";
            } else {
                cout << "Book \"" << library[i].title << "\" is already issued.\n";
            }
            break;
        }
    }
    if (!found) {
        cout << "ID doesn't match in our system.\n";
    }
}

void returnBooks(int number, Library library[], int id) {
    bool found = false;
    for (int i = 0; i < number; i++) {
        if (library[i].bookId == id) {
            found = true;
            if (library[i].status == "Issued") {
                library[i].status = "Available";
                cout << "Book \"" << library[i].title << "\" has been returned.\n";
            } else {
                cout << "Book \"" << library[i].title << "\" was not issued.\n";
            }
            break;
        }
    }
    if (!found) {
        cout << "ID doesn't match in our system.\n";
    }
}


int main(){
    int number;
    cout<< "Enter the number of books: ";
    cin >> number;

    Library library[number];
    
    cout << "Give the inputs: " << endl;
    for(int i =0;i< number;i++){
        cout << "Enter the details of books " << i+1 << endl;
        cout << "Enter the book id: ";
        cin >> library[i].bookId;
        cin.ignore();

        cout << "Enter the title: ";
        getline(cin, library[i].title);

        cout << "Enter the status: ";
        getline(cin,library[i].status);

        library[i].status = "Available";
        
    }

    int choice,id;
    do{
        cout << "------Library List-------" << endl;
        cout << " 1. Display the book\n 2. Issue the book\n 3. Return the book\n 4.Exit\n";

        cout << "Enter the choice: ";
        cin >> choice;

        switch(choice){
            case 1:
            displayBooks(number, library);
            break;
            case 2:
            cout << "Enter the ID for checking the Issued book: ";
            cin >> id;
            issueBooks(number, library,id);
            break;
            case 3:
            cout << "Enter Book ID to return: ";
            cin >> id;
            returnBooks(number,library,id);
            break;
            case 4:
            cout << "Exiting Program........";
            break;
            default:
            cout << "Invalid choice\n";
        }

    }while(choice != 4);


    return 0;
}