#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int findExtra(int a[], int b[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i < n)
    {
        if (a[i] != b[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 7;
    int A[] = {2, 4, 6, 8, 9, 10, 12};
    int B[] = {2, 4, 6, 8, 10, 12};
    cout << findExtra(A, B, n) << endl;
    return 0;
}
