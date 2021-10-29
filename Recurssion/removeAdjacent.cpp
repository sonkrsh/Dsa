#include <iostream>
#include <ctype.h>
using namespace std;

string findAdjacent(char input[], int index)
{
    static string adjacentAns = "";
    if (input[index] == '\0')
    {
        return "";
    }
    if (!isalpha(input[index]))
    {
        return "";
    }
    if (input[index] == input[index + 1])
    {
        return findAdjacent(input, index + 1);
    }

    return adjacentAns = input[index] + findAdjacent(input, index + 1);
}

int main()
{
    char input[] = {'a', 'a', 'a', 'a', 'a', 'b', 'z', 'a', 'b', 'y'};
    cout << findAdjacent(input, 0) << endl;
    return 0;
}