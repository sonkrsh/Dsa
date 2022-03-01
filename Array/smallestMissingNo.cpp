#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int missingNumber(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {

        if (arr[i] >= 0)
        {

            if (arr[i - 1] < 0 && arr[i] != 0 && arr[i] != 1 && i != 0)
            {
                return 1;
            }
            if (arr[i + 1] - arr[i] > 1)
            {
                return arr[i] + 1;
            }

            if (i + 1 == n)
            {
                return arr[n - 1] + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    sort(arr, arr + n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    cout << missingNumber(arr, n) << endl;
    return 0;
}
