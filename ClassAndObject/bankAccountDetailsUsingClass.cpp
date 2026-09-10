#include <iostream>
using namespace std;


class BankAccount {

    public:
    int account_number;
    string account_holder;
    int balance;

    void display(){
        cout << "Account Number: " << account_number << endl;
        cout << "Account holder: " << account_holder << endl;
        cout << "Balance: " << balance << endl;;
    }

     void withdraw(float amount){
        if(amount <= balance &&  amount > 0){
              balance = balance - amount;
              cout << "Withdraw amount: " << amount << endl;
              cout << "Balance After Withdraw : " << balance << endl;
        }
        else{
            cout << "Insufficient Amount\n";
        }

     }

     void deposit(float amount){
        balance = amount + balance;
        cout << "Deposited amount: " << amount << endl;
        cout << "deposit successfully \n Balance is: " << balance << endl;
     }
};

int main(){

    BankAccount customer1;
    

    customer1.account_number = 101;
    customer1.account_holder = "Ayush Shriwastav";
    customer1.balance = 2000;
    
    cout << "Display Initial Customer Details \n";
    customer1.display();

    
    customer1.withdraw(2000);
    customer1.deposit(5000);

     cout << "Balance After Deposit\n";
    customer1.display();


}