#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int A[] = {4, 4, 4, 4};

    int largest = 0;
    int secondLargest = 0;
    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++)
    {
        if (A[i] > largest)
        {
            secondLargest = largest;
            largest = A[i];
        }
    }
    cout << largest << endl;
    cout << secondLargest << endl;
    return 0;
}
