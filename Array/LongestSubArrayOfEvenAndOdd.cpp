#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int currentValue = 0;
    int maxDiff = 0;

    int arr[] = {74, 80, 8, 13, 37, 49, 20, 6};
    int n = 8;
    int indentifierBool = 0;
    int count = 0;
    int newCount = 0;
    int Totalcount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {

            if (indentifierBool == 0 || indentifierBool == 2)
            {
                count++;
                if (newCount <= count)
                {
                    newCount = count;
                }
            }
            else
            {
                if (newCount <= count)
                {
                    newCount = count;
                }
                count = 1;
            }
            cout << arr[i] << " U " << count << endl;
            indentifierBool = 1;
        }
        if (arr[i] % 2 != 0)
        {

            if (indentifierBool == 0 || indentifierBool == 1)
            {
                count++;
                if (newCount <= count)
                {
                    newCount = count;
                }
            }
            else
            {
                if (newCount <= count)
                {
                    newCount = count;
                }
                count = 1;
            }
            cout << arr[i] << " D " << count << endl;
            indentifierBool = 2;
        }
    }
    cout << newCount;
    return 0;
}
