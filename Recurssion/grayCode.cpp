#include <iostream>
#include <vector>
using namespace std;

void grayCodea(int n, string temp, vector<string> &ans, int start, int k)
{
    if (start == n)
    {
        ans.push_back(temp);

        return;
    }
    if (k == 0)
    {
        grayCodea(n, temp + "0", ans, start + 1, 0);
        grayCodea(n, temp + "1", ans, start + 1, 1);
    }
    else
    {
        grayCodea(n, temp + "1", ans, start + 1, 0);
        grayCodea(n, temp + "0", ans, start + 1, 1);
    }
}
int main()
{
    int n = 3;
    vector<string> ans;
    grayCodea(n, "", ans, 0, 0);
    for (int i = 0; i <= ans.size(); i++)
    {
        //cout << ans[i] << endl;
    }

    return 0;
}
