#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

bool checkArraySortedAndRotated(int arr[], int num)
{

    int counter = 0;

    for (int i = 0; i < num; i++)
    {

        if (arr[i] > arr[(i + 1) % num])
        {
            cout << "cal" << arr[i] << endl;
            cout << "cal" << arr[(i + 1) % num] << endl;
            counter++;
        }
    }
    // cout << "dd" << counter << endl;
    if (counter > 1)
    {

        return false;
    }

    return true;
}
int main()
{
    int arr[] = {1, 2, 3};
    int num = 3;

    cout << checkArraySortedAndRotated(arr, num) << endl;

    return 0;
}
