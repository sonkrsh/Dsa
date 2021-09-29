#include <iostream>
using namespace std;

int findSumOfArray(int arr[], int size, int find)
{

    if (size <= 0)
    {
        return 0;
    }
    if (arr[size] == find)
    {
        return size;
    }

    return findSumOfArray(arr, size - 1, find);
}
int main()
{
    int find = 2;
    int arr[] = {8, 2, 1, 4, 6, 2, 4};
    int arrySize = *(&arr + 1) - (arr);
    cout << findSumOfArray(arr, arrySize - 1, find) << endl;
    return 0;
}