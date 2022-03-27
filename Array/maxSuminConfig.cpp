#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int max_sum(int A[], int N)
{
    int maxSum = -1;
    int maxDigit = -1;
    int maxIndex = -1;

    for (int i = 0; i < N; i++)
    {
        if (A[i] > maxDigit)
        {
            maxDigit = A[i];
            maxIndex = i;
        }
    }
    int j = -1;
    int count = N;
    int ans = 0;
    while (maxIndex != j)
    {
        count--;
        if (j == -1)
        {
            ans = ans + A[maxIndex] * count;
            j = maxIndex;
        }
        else
        {
            ans = ans + A[j] * count;
        }
        if (j == 0)
        {
            j = N;
        }
        j--;
    }
    return ans;
}
int main()
{
    int N = 3;
    int A[] = {-3, -2, -3};
    cout << max_sum(A, N) << endl;
    return 0;
}
