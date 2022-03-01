#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

bool sortedAndRotated(int arr[], int num)
{
    int checkBool = 0;

    for (int i = 1; i < num; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            checkBool++;
        }
    }
    if (checkBool > 1)
    {
        return false;
    }
    cout << checkBool << endl;
    if (arr[num - 1] <= arr[0])
    {
        checkBool = 1;
    }
    return checkBool;
}

int main()
{
    int N = 4;
    int arr[] = {10, 20, 30, 14};
    cout << sortedAndRotated(arr, N) << endl;

    return 0;
}
