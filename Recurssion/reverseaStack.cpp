#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;

void ReverseStack(stack<int> &St, vector<int> &ans)
{
    if (St.empty())
    {
        return;
    }
    ans.push_back(St.top());
    St.pop();
    ReverseStack(St, ans);
}
int main()
{

    stack<int> St;
    vector<int> ans;
    St.push(1);
    St.push(2);
    St.push(3);
    St.push(4);
    ReverseStack(St, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
