#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int minimizeHeights(int arr[], int n, int k)
{

    int currentValue = 10000;
    int tempValue = arr[0];

    for (int i = 1; i < n; i++)
    {
        currentValue = min(currentValue, tempValue - arr[i]);

        tempValue = min(min(tempValue + k, arr[i]), min(tempValue - k, arr[i]));
    }
    return currentValue;
}

int main()
{
    int arr[] = {3, 9, 12, 16, 20};
    int n = 5;
    int k = 3;
    sort(arr, arr + n, greater<int>());
    cout << minimizeHeights(arr, n, k);
    return 0;
}
