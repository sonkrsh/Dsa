#include <iostream>
using namespace std;

int thillingZeros(long long int inputFive, int counter)
{
    if (inputFive < 5)
    {
        return counter;
    }
    return thillingZeros(inputFive / 5, counter + inputFive / 5);
}

int main()
{
    long long int input = 80000;
    cout << thillingZeros(input, 0);
    return 0;
}