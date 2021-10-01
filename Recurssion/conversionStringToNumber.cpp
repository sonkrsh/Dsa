#include <iostream>
using namespace std;

int conversionToNumber(string input, int length)
{

    if ((input[0] >= 'a' && input[0] <= 'z') || (input[0] >= 'A' && input[0] <= 'Z') || (input[length] >= 'a' && input[length] <= 'z') || (input[length] >= 'A' && input[length] <= 'Z'))
    {

        return -1;
    }
    if (length == 0)
    {

        return input[length] - '0';
    }

    return 10 * conversionToNumber(input, length - 1) + input[length] - '0';
}
int main()
{
    string input = "12553";

    cout << conversionToNumber(input, input.length() - 1) << endl;
}