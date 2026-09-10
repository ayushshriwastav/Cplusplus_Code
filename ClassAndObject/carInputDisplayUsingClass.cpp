#include <iostream>
using namespace std;

class car{

    private:
    string brand;
    string model;
    float price;

    public:

    void input(){
        cout << "Enter the brand: ";
        cin >> brand;

        cout << "Enter the model: ";
        cin >> model;

        cout << "Enter the price: ";
        cin >> price;

    }

    void display(){
        cout << "The brand: " << brand << endl;
        cout << "The Model: " << model << endl;
        cout << "The Price: " << price << endl;
    }
};

int main(){
    car car[2];

    cout << "----------------Enter the input-------------\n";
    for(int i=0;i<2;i++){
        cout << "car " << i+1 << " details\n";
        car[i].input();
        cout << endl;
    }


    cout << "------------------The Output----------------\n";
     for(int i=0;i<2;i++){
        cout << "car " << i+1 << " details\n";
        car[i].display();
        cout << endl;
    }
}