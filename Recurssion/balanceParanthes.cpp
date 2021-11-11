#include <iostream>
#include <vector>
using namespace std;

void maker(int n, int open, int close, vector<string> &ans, string temp)

{

    if (open == n)
    {
        while (close < n)
        {
            temp = temp + ')';
            close++;
        }
        ans.push_back(temp);
        return;
    }
    if (open > close)
    {

        maker(n, open + 1, close, ans, temp + '(');
        maker(n, open, close + 1, ans, temp + ')');
    }
    else
    {

        maker(n, open + 1, close, ans, temp + '(');
    }
}
int main()
{
    int n = 3;
    vector<string> ans;
    int open = 0, close = 0;
    maker(n, open, close, ans, "");

    for (int i = 0; i <= ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
