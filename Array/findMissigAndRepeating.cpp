#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int *findTwoElement(int *arr, int n)
{
    int *ans = new int[2];
    int i = 0;
    bool flag = true;

    while (i < n - 1)
    {
        // cout << arr[i] << endl;
        if (i >= 0 && (arr[i] == arr[i + 1] || arr[i] == arr[i - 1]))
        {
            ans[0] = arr[i];
        }
        if (arr[0] != 1)
        {
            ans[1] = 1;
        }
        if (arr[n - 1] != n)
        {
            ans[1] = n;
        }
        if (arr[i + 1] - arr[i] > 1)
        {
            ans[1] = (arr[i] + 1);
        }
        i++;
    }
    return ans;
}

int main()
{
    int n = 47;

    int arr[] = {13, 33, 43, 16, 25, 19, 23, 31, 29, 35, 10, 2, 32, 11, 47, 15, 34, 46, 30, 26, 41, 18, 5, 17, 37, 39, 6, 4, 20, 27, 9, 3, 8, 40, 24, 44, 14, 36, 7, 38, 12, 1, 42, 12, 28, 22, 45};
    sort(arr, arr + n);
    cout << findTwoElement(arr, n)[0];
}
