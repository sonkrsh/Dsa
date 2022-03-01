#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int equilibriumPoint(long long a[], int n)
{
    int left = 0;
    int right = 0;
    if (n % 2 != 0)
    {
        int middle = (n / 2);
        for (int i = 0; i < middle; i++)
        {
            left += a[i];
            right += a[(n - 1) - i];
        }

        if (left == right)
        {
            return middle + 1;
        }
        return -1;
    }
    return -1;
}

int main()
{
    int n = 30;
    long long a[] = {20, 17, 42, 25, 32, 32, 30, 32, 37, 9, 2, 33, 31, 17, 14, 40, 9, 12, 36, 21, 8, 33, 6, 6, 10, 37, 12, 26, 21, 3};
    cout << equilibriumPoint(a, n) << endl;

    return 0;
}
