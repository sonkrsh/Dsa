#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void rotateArr(int arr[], int d, int n, int temp[10])
{

    for (int i = 0; i < n; i++)
    {
        if (i < d)
        {
            temp[(n)-d + i] = arr[i];
        }

        else
        {
            temp[i - d] = arr[i];
        }
    }
}

int main()
{
    int temp[10] = {};
    int d = 4;
    int n = 10;
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    rotateArr(arr, d, n, temp);
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
        cout << arr[i] << endl;
    }
    return 0;
}
