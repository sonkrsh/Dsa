#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    long long arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int temp = 0;
    int check = n % 2 == 0 ? (n / 2) - 1 : n / 2;
    int duplicateArray[n];

    for (int i = arr[0]; i <= arr[n - 1]; i++)
    {
        if (arr[(n - 1) - i] == arr[i - 1])
        {
            break;
        }
        if (i == arr[i - 1])
        {
            arr[i] = arr[(n - 1) - i];
            break;
        }
        arr[i - 1] = arr[(n - 1) - i];
        arr[i + 1] = i;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}