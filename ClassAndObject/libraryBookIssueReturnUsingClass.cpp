#include <iostream>
using namespace std;

class Library{
    private:
    int bookId;
    string title;
    string author;
    bool available;

    public:
    void input(){
         cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);

        available = true; 
    }

    void display(){
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Availability: " << (available ? "Available" : "Issued") << endl;
    }

    void issuedBook(){
       if (available) {
            available = false;
            cout << "Book \"" << title << "\" has been issued.\n";
        } else {
            cout << "Sorry! Book \"" << title << "\" is already issued.\n";
        }
    }

    void returnBook(){
         if (!available) {
            available = true;
            cout << "Book \"" << title << "\" has been returned.\n";
        } else {
            cout << "Book \"" << title << "\" was not issued.\n";
        }
    }

    int getId() {
         return bookId;
    } 
};

int main(){
   int n;
   cout << "Enter the number of book: ";
   cin >> n;

   Library books[n];

     for (int i = 0; i < n; i++) {
        cout << "\n--- Enter details of book " << i + 1 << " ---\n";
        books[i].input();
    }

    int choice, id;
    do{

        cout << "\n--- Library Menu ---\n";
        cout << "1. Display all books\n";
        cout << "2. Issue a book\n";
        cout << "3. Return a book\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
             for (int i = 0; i < n; i++) {
                    books[i].display();
                }
                break;

            case 2:
            cout << "Enter Book ID to issue: ";
                cin >> id;
                {
                    bool found = false;
                    for (int i = 0; i < n; i++) {
                        if (books[i].getId() == id) {
                            books[i].issuedBook();
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Book ID not found!\n";
                }
                break;

                case 3:
                cout << "Enter Book ID to return: ";
                cin >> id;
                {
                    bool found = false;
                    for (int i = 0; i < n; i++) {
                        if (books[i].getId() == id) {
                            books[i].returnBook();
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Book ID not found!\n";
                }
                break;

                 case 4:
                cout << "Exiting program...\n";
                break;

                default:
                cout << "Invalid choice!\n";

        }
        

    }while(choice != 4);

    return 0;
}
