#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void KP(string alpha[], int a[], vector<string> &ans, string temp, int index, int N)
{
    if (index == N)
    {
        ans.push_back(temp);
        return;
    }
    int value = a[index];
    string output = alpha[value];

    for (int i = 0; i < output.length(); i++)
    {
        KP(alpha, a, ans, temp + output[i], index + 1, N);
    }
}

int main()
{
    int a[] = {2};
    int N = 1;
    vector<string> ans;
    string alpha[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    KP(alpha, a, ans, "", 0, N);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
