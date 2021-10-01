#include <iostream>

using namespace std;

string removeAllOccurences(string input, int length, char letter)
{
    if (input[length] == '\0')
    {
        return "";
    }
    if (input[length] == letter)
    {
        return removeAllOccurences(input, length + 1, letter);
    }
    return input[length] + removeAllOccurences(input, length + 1, letter);
}
int main()
{
    string input = "geeksforgeeks";
    char letter = 'e';
    cout << removeAllOccurences(input, 0, letter) << endl;
    return 0;
}