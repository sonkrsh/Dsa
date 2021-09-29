#include <iostream>
using namespace std;

int findSumOfArray(int arr[], int size)
{
    if (size < 0)
    {
        return 0;
    }
    return arr[size] + findSumOfArray(arr, size - 1);
}
int main()
{
    int arr[] = {1, 1, 1, 4, 6, 2, 3};
    int arrySize = *(&arr + 1) - (arr);
    cout << findSumOfArray(arr, arrySize - 1) << endl;
    return 0;
}