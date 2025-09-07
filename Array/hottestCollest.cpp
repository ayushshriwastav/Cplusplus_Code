#include <iostream>
using namespace std;
int main() {
    int temp[7];

    cout << "Enter the temperature: ";
    for(int i =0;i<7;i++){
        cin >> temp[i];
    }

    int max = temp[0], min = temp[0], hotday = 0, coolday = 0;

    for (int i =0; i< 7;i++){
        if (temp[i]> max){
            max = temp[i];
            hotday = i;
        }

        else if(temp[i]<min){
            min = temp[i];
            coolday = i;
        }
    }

    cout << "hotest day : " << hotday+1 << " with " << max << "°C" << endl;
     cout << "coolest day : " << coolday+1 << " with " << min << "°C" << endl;

     return 0;
}