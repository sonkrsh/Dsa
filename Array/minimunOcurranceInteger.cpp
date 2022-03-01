#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int L[] = {1, 6, 0, 3, 3};
    int R[] = {2, 8, 9, 8, 5};
    int n = 5;

    int arr[1000000];
    int temp = 0;
    memset(arr, 0, sizeof arr);

    for (int i = 0; i < n; i++)
    {
        for (int j = L[i]; j <= R[i]; j++)
        {

            arr[j] += 1;
        }
    }
    for (int i = 0; i < 1000000; i++)
    {
        if (arr[i] > temp)
        {
            temp = arr[i];
        }
    }

    cout << temp << endl;

    return 0;
}
