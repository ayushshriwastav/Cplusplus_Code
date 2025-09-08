#include <iostream>
using namespace std;

struct Book{
    string title;
    string author;
    float price;
};

int main(){
    const int n =5;

    Book books[n];

    for(int i =0;i<n;i++){
         cout << "\nEnter details of book " << i + 1 << ":\n";
        cout << "Enter the title name: ";
        getline(cin, books[i].title);

        cout << "Enter the author name: ";
        getline(cin, books[i].author);

        cout << "Enter the price name: ";
        cin >> books[i].price;

        cin.ignore();
    }

    int cheapBook = 0;
    for(int i =1;i<n;i++){
        if(books[i].price < books[cheapBook].price){
            cheapBook = i;
        } 
    }

     // Display cheapest book
    cout << "\nCheapest Book Details:\n";
    cout << "Title: " << books[cheapBook].title << endl;
    cout << "Author: " << books[cheapBook].author << endl;
    cout << "Price: " << books[cheapBook].price << endl;

}
