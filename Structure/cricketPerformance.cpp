#include <iostream>
using namespace std;

struct Cricketer{
    string name;
    int runs;
    int wickets;
};

int main(){

const int n = 2 ;

Cricketer cricketers[n];

for(int i=0;i< n;i++){
    cout << "Enter the details of cricketer " << i+1 << endl;

    cout << "Enter the name: ";
    getline(cin, cricketers[i].name);

    cout << "Enter the runs: ";
    cin >> cricketers[i].runs;

    cout << "Enter the wickets : ";
    cin >> cricketers[i].wickets;

    cin.ignore();

}

int bestIndex = 0;
for(int i =1;i<n;i++){
    if(cricketers[i].runs > cricketers[bestIndex].runs || (cricketers[i].runs == cricketers[bestIndex].runs && cricketers[i].wickets > cricketers[bestIndex].wickets)){
        bestIndex = i;
    }
}

cout << "The best performance: " << endl;
cout << "The best performance name: " << cricketers[bestIndex].name << endl;
cout << "The best performance name: " << cricketers[bestIndex].runs << endl;
cout << "The best performance name: " << cricketers[bestIndex].wickets << endl;

return 0;
}
