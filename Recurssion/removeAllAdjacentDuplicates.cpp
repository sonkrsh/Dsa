#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

string removeAdjacentDuplicates(string input, string output, int length, int current, bool check)
{

    if (length == current)
    {

        if (check)
        {

            return removeAdjacentDuplicates(output, "", output.length(), 0, false);
        }

        return output;
    }
    if (input[current] != input[current + 1] && input[current] != input[current - 1])
    {

        output = output + input[current];
    }
    else
    {
        check = true;
    }
    return removeAdjacentDuplicates(input, output, length, current + 1, check);
}

int main()
{
    string input = "abc";
    string output = "";

    cout << removeAdjacentDuplicates(input, output, input.length(), 0, false);

    return 0;
}
