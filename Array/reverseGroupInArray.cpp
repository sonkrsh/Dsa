#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void handleReverse(vector<long long> &arr, int index, int path)
{
    if (index >= path)
    {
        return;
    }
    swap(arr[index], arr[path]);
    handleReverse(arr, index + 1, path - 1);
}

int main()
{

    vector<long long> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    int k = 3;
    int n = 5;
    int divideNo = (n / k) - 1;
    int quotentNo = n % k;

    for (int i = 0; i < 5; i = i + k)
    {
        if (n - quotentNo != i)
        {
            handleReverse(arr, i, (i + k) - 1);
        }
        else
        {
            handleReverse(arr, i, n - 1);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
