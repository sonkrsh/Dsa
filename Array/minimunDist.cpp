#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int minDist(int a[], int n, int x, int y)
{
    int first = 0;
    int second = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            first = i;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == y && first < i)
        {
            second = i;
        }
    }
    return abs(second - first);
}

int main()
{
    int n = 8;

    int arr[] = {2, 5, 3, 5, 4, 4, 2, 3};
    int x = 3;
    int y = 2;
    cout << minDist(arr, n, x, y);
}
