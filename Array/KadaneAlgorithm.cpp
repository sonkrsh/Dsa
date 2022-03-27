#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int currentValue = 0;
    int maxDiff = 0;

    int arr[] = {-1, -2, -3, -4};
    int n = 7;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        currentValue += arr[i];
        if (currentValue >= maxDiff)
        {
            maxDiff = currentValue;
        }

        if (currentValue < 0)
        {
            currentValue = 0;
        }
    }
    if (maxDiff <= 0)
    {
        cout << -1;
    }
    else
    {
        cout << maxDiff;
    }

    return 0;
}
