#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int A[] = {32760, 17053, 24700, 15465, 4920, 28027, 10060, 29207, 23928, 8525, 5844, 14935, 11767, 14669, 8855, 19206, 21061, 29337, 2135, 22554, 5705, 29190, 32740, 13781, 9172, 13010};

    int max = -1, max2 = -1;

    for (int i = 0; i < 26; i++)
    {
        if (max < A[i])
        {
            max2 = max;
            max = A[i];
        }
        else if (max != A[i] && max2 < A[i])
        {
            max2 = A[i];
        }
    }

    cout << max << endl;
    cout << max2 << endl;

    return 0;
}
