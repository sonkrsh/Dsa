#include <iostream>
using namespace std;

int fibonacci(int n, int left, int right, int total)
{
    if (n == 1)
    {
        return total;
    }
    total = left + right;
    left = right;
    right = total;
    return fibonacci(n - 1, left, right, total);
}

int main()
{
    int n = 5;

    int total = 0;
    int left = 0;
    int right = 1;
    cout << fibonacci(n, left, right, total);
    // for (int i = 5; i > 1; i--)
    // {

    //     total = left + right;

    //     left = right;
    //     right = total;
    // }
    // cout << total;
    return 0;
}