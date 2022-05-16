#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    string inputString = "aabbcanaaclkenrtld";
    unordered_map<char, int> freq;

    // Store the frequency of each
    // element from the array
    for (int i = 0; i < inputString.length(); i++)
    {
        freq[inputString[i]] = freq[inputString[i]] + 1;
    }
    for (auto &i : freq)
    {
        cout << i.first << ": " << i.second << endl;
    }
}
