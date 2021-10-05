#include <iostream>
using namespace std;

string pairStart(string input, int length, string output)
{

    if (input[length] == '\0')
    {
        return output;
    }
    if (input[length + 1] == input[length])
    {
        output = output + input[length];
        output = output + '*';
    }
    else
    {
        output = output + input[length];
    }

    return pairStart(input, length + 1, output);
}
int main()
{
    string input = "ccccc";
    string output = "";
    cout << pairStart(input, 0, output) << endl;
}