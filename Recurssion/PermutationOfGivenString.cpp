#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void PermutationString(string S, vector<string> &ans, int sIndex)
{

    if (S.length() - 1 == sIndex)
    {
        cout << S << endl;
        return;
    }

    for (int i = sIndex; i < S.length(); i++)
    {
        swap(S[sIndex], S[i]);
        ans.push_back(S);
        PermutationString(S, ans, sIndex + 1);
    }
}

int main()
{

    string S = "ABC";
    vector<string> ans;
    PermutationString(S, ans, 0);

    return 0;
}
