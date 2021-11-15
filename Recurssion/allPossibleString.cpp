#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void possibleString(string input, string output, vector<string> &ans)
{
    if (input == "")
    {
        ans.push_back(output);

        return;
    };
    if (output == "")
    {
        string input2 = input;
        string s = "";
        input2.erase(input2.begin() + 0);
        possibleString(input2, s += input[0], ans);
        return;
    }
    string opt1 = input;
    string opt2 = input;
    input.erase(input.begin() + 0);
    possibleString(input, output + ' ' + opt1[0], ans);
    possibleString(input, output + opt2[0], ans);
}
int main()
{
    string input = "abc";
    vector<string> ans;
    string temp = "";
    possibleString(input, "", ans);
    reverse(ans.begin(), ans.end());
    for (int i = 0; i <= ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}
