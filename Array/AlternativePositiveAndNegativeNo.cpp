#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int n = 6;
    int arr[] = {1, 2, 3, -4, -1, 4};

    int i = 0;
    int j = 0;
    int iStop = 0;
    int jStop = 0;
    vector<int> v;

    while (i < n && j < n)
    {
        if (arr[i] >= 0)
        {
            iStop = 1;
        }
        else
        {

            i++;
        }
        if (arr[j] < 0)
        {
            jStop = 1;
        }
        else
        {
            j++;
        }
        if (iStop == 1 && jStop == 1)
        {

            v.push_back(arr[i]);
            v.push_back(arr[j]);
            i++;
            j++;
            iStop = 0;
            jStop = 0;
        }
    }
    // cout << i << endl;
    // cout << j << endl;
    if (i >= n && j < n)
    {
        for (int k = j; k < n; k++)
        {
            if (arr[k] < 0)
            {

                v.push_back(arr[k]);
            }
        }
    }
    if (j >= n && i < n)
    {
        for (int k = i; k < n; k++)
        {
            // v.push_back(arr[k]);
            if (arr[k] >= 0)
            {

                v.push_back(arr[k]);
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}
