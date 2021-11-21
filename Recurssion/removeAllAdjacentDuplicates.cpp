#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

string removeAdjacentDuplicates(string input)
{
    int current=0;
    string output="";
    int n = input.length();
    while ((n - 1) >= current)
    {
        if (input[current] != input[current + 1] && input[current] != input[current - 1])
        {
            output +=  input[current];
        }
    
        current++;
    }
    if (n!=output.length() && output != "")
    {
        return removeAdjacentDuplicates(output);
    }
    return output;
}

int main()
{
    string input = "abccbccba";
    string output = "";

    cout << removeAdjacentDuplicates(input);

    return 0;
}
