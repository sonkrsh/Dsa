#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<int> subarraySum(int arr[], int n, long long s)
{
    long long rightPointer = 0;
    long long leftPointer = 0;
    long long tempz = 0;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        tempz += arr[i];

        if (tempz == s)
        {
            v.push_back(rightPointer);
            v.push_back(leftPointer);
            break;
        }
        rightPointer++;

        if (tempz > s)
        {
            while (leftPointer < rightPointer)
            {
                cout << leftPointer << " " << tempz - arr[leftPointer] << endl;
                if (tempz - arr[leftPointer] == s)
                {
                    cout << "CALL1" << endl;
                    v.push_back(rightPointer);
                    v.push_back(leftPointer);
                    break;
                }
                leftPointer++;
                if (leftPointer == rightPointer)
                {
                    cout << "CALL2" << endl;
                    tempz = 0;
                }
            }
        }
    }
    return v;
}

int main()
{
    int arr[] = {135, 101, 170, 125, 79, 159, 163, 65, 106, 146, 82, 28, 162, 92, 196, 143, 28, 37, 192, 5, 103, 154, 93, 183, 22, 117, 119, 96, 48, 127, 172, 139, 70, 113, 68, 100, 36, 95, 104, 12, 123, 134};
    int n = 42;
    long long s = 468;
    cout << subarraySum(arr, n, s)[0];
    return 0;
}
