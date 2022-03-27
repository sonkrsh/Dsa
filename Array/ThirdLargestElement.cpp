#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int thirdLargest(int a[], int n)
{
    int largest = -1;
    int secondLargest = -1;
    int thirdLargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= largest)
        {
            thirdLargest = secondLargest;
            secondLargest = largest;
            largest = a[i];
        }
        if (a[i] > secondLargest && a[i] < largest)
        {
            thirdLargest = secondLargest;
            secondLargest = a[i];
        }
    }
    return thirdLargest;
}

int main()
{
    int arr[] = {10, 2};
    int n = 2;

    cout << thirdLargest(arr, n);
    return 0;
}
