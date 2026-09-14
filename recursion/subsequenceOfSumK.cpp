#include <iostream>
using namespace std;

int countSubsequences(int array[], int n, int index, int sum, int K)
{
    // Base condition
    if (index == n)
    {
        if (sum == K)
        {
            return 1;
        }

        return 0;
    }

    // include current element in the subsequence
    int include = countSubsequences( array, n,index + 1, sum + array[index], K);

    // exclude current element from the subsequence
    int exclude = countSubsequences( array,n, index + 1,sum,K);

    return include + exclude;
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int array[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int K;

    cout << "Enter K: ";
    cin >> K;

    int count = countSubsequences(array, n, 0, 0, K);

    cout << "Number of subsequences with sum "
         << K << " = " << count << endl;

    return 0;
}