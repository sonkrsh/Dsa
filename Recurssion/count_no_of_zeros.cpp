#include <iostream>
using namespace std;

int countZeros(long int value)
{

    if (value / 10 == 0)
    {
        return 0;
    }
    if (value % 10 == 0)
    {

        return 1 + countZeros(value / 10);
    }
    return countZeros(value / 10);
}
int main()
{
    long int value = 000;

    cout << countZeros(value) << endl;
    return 0;
}