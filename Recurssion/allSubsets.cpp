#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void allSubset(vector<int> &input, vector<vector<int> > &ans, int current, vector<int> &temp)
{
    if (current == input.size())
    {
        return;
    }

    for (int i = current; i < input.size(); i++)
    {
        temp.push_back(input[i]);
        ans.push_back(temp);
        allSubset(input, ans, i + 1, temp);
        temp.pop_back();
    }
}
int main()
{
    vector<int> input;
    input.push_back(1);
    input.push_back(2);
    input.push_back(3);
    /*     input.push_back(3);
    input.push_back(4); */

    vector<vector<int> > ans;
    vector<int> temp;

    allSubset(input, ans, 0, temp);
    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}