#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int n = 6;
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(9);
    arr.push_back(10);

    for (int i = 0; i < n; i = i + 2)
    {
        if (i != n - 1)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
