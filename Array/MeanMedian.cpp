#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int A[] = {2, 8, 3, 4};
    int N = 4;
    int customN = N;
    int sum = 0;
    while (customN >= 0)
    {
        customN--;
        sum = sum + A[customN];
    }
    sum / N;

    while (customN >= 0)
    {
        customN--;
        sum = sum + A[customN];
    }
    sort(A, A + N);
    if ((sum / N) % 2 != 0)
    {
        cout << A[N / 2];
    }
    else
    {
        cout << (A[N / 2] + A[(N / 2) - 1]) / 2;
    }

    return 0;
}
