#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int rowWithMax1s(int arr[4][4], int n, int m)
{
    int maxData = 0;
    int maxRowG = 0;
    int flag = false;

    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int maxRow = 0;
        while (j < n)
        {

            if (arr[i][j] == 1)
            {
                flag = true;
                maxRow++;
                if (maxRowG < maxRow)
                {
                    maxData = i;
                    maxRowG = maxRow;
                }
            }
            j++;
        }
    }
    if (!flag)
    {
        return -1;
    }
    return maxData;
}

int main()
{
    int n = 4;
    int m = 4;
    int arr[4][4] = {{0, 1, 1, 1},
                     {0, 0, 1, 1},
                     {1, 1, 1, 1},
                     {0, 0, 0, 0}};
    cout << rowWithMax1s(arr, n, m) << endl;

    return 0;
}
