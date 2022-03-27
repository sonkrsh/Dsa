#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int countInversion(long long arr[], int n)
{
    long long runLoop = true;
    long long minI = 0;
    long long count = 0;
    long long i = 0;

    while (i < n)
    {
        if (runLoop)
        {
            i++;
            runLoop = false;
        }
        if (!runLoop)
        {
            if (arr[i] < arr[minI])
            {
                // cout << arr[minI] << " " << i << endl;
                count++;
            }
            minI++;
            if (minI > i)
            {
                minI = 0;
                runLoop = true;
            }
        }
    }
    return count;
}

int main()
{
    int n = 5;
    long long arr[] = {2, 4, 1, 3, 5};
    cout << countInversion(arr, n) << endl;

    return 0;
}
