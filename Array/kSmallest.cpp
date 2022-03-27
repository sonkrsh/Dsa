#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int kSmallest(int arr[], int r, int k)
{
    int one = 0;
    for (int i = 0; i < r; i++)
    {
        if (i + 1 == k)
        {
            one = arr[i];
            return arr[i];
        }
    }
    return one;
}

int main()
{
    int arr[] = {0, 2, 1, 2, 0};
    int n = 5;
    int k = 4;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    // cout << kSmallest(arr, n, k);
    return 0;
}
