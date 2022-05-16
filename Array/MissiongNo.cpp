#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int missingNumber(int arr[], int n)
{
    sort(arr, arr + n);
    int i = 0;
    int found = -1;
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
        }

    while (i < n)
    {
        if (arr[i] >= 0)
        {
            if (j == -1)
            {
                if (arr[i] != 1 && arr[i] != 0)
                {
                    found = 1;
                }
                j = arr[i];
            }
            else
            {
                j++;
            }
            if (arr[i] != j)
            {
                found = j;
            }
        }

        if (i == n - 1 && found == -1)
        {
            // cout << i << endl;
            // cout << arr[n - 1] << endl;
            if (arr[0] == 0)
            {
                found = n;
                return n;
            }
            else
            {
                found = n + 1;
            }
        }
        if (found != -1)
        {
            return found;
            break;
        }
        i++;
    }

    return found;
}
int main()
{
    int A[] = {14, -2, -7, 18, 12, 11, 17, -5, 21, 15, -1, 20, 10, -6, 9, 8, -4, 5, 3, 0, 2, 16, 19, 13, 1, 7, 6, 22, -3, 4};
    int n = 30;

    cout << missingNumber(A, n);
    return 0;
}
