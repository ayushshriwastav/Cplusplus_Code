#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char helper, char destination)
{
    // Base condition
    
    if (n == 0){
        return;
    }

    // recursive function call to move n-1 disks from source to helper using destination as auxiliary
    towerOfHanoi(n - 1, source, destination, helper);

    
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Step 3:
    // n-1 disks helper to destination using source as auxiliary
    towerOfHanoi(n - 1, helper  , source, destination);
}

int main()
{
    int n;  

    cout << "Enter number of disks: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of disks" << endl;
        return 0;
    }

    towerOfHanoi(n, 'A', 'B', 'C');

    int total = 1;

    cout << "Total Moves: ";
    for (int i = 0; i < n; i++)
    {
        total = total * 2;
    }
    cout << total - 1 << endl;

    return 0;
}