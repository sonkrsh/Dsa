#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{

    int a[] = {9, 14, 10, 10, 1, 2, 1, 7, 10, 10, 14, 19, 9};
    int size = 13;
    sort(a, a + size);
    int current = a[0];
    int count = 1;
    int customSize = size / 2;

    for (int i = 1; i < size; i++)
    {
        if (a[i] == a[i - 1])
        {
            count++;
            current = a[i];
            if (count > customSize)
            {
                break;
            }
        }
        else
        {
            count = 1;
        }
    }
    if (count < customSize)
    {
        count = 1;
    }
    cout << count << endl;
    // count == 1 ? -1 : current;
    return 0;
}
