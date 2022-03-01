#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int N = 5;

    int arr[] = {40,
                 85,
                 9,
                 14,
                 53};
    int x = 13,
        y = 32;

    int first = 0;
    int second = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == x)
        {
            first = first + 1;
        }
        if (arr[i] == y)
        {
            second = second + 1;
        }
    }

    if (first == second)
    {
        if (x < y)
        {
            cout << "a" << x << endl;
        }
        cout << "b" << y << endl;
    }
    if (first > second)
    {
        cout << "c" << first << endl;
    }
    else
    {
        cout << "d" << second << endl;
    }

    return 0;
}
