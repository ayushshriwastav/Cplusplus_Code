#include <iostream>
using namespace std;

void displayBooks();
void issueBooks();
void returnBooks();

struct Library{
    int bookId;
    string title;
    string status;
};



int main(){
    int number;
    cout<< "Enter the number of books: ";
    cin >> number;

    Library library[number];
    
    cout << "Enter the details: " << endl;
    for(int i =0;i< number;i++){
        
    }
    return 0;
}