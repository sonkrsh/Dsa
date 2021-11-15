#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void combinationSum(vector<int> &input, int perticular, int length, string ans, vector<string> &temp)
{
    if (ans[ans.size() - 1] < ans[ans.size() - 2])
    {
        return;
    }
    if (length < 0)
    {
        return;
    }
    if (length == 0)
    {

        temp.push_back(ans);

        return;
    }

    for (int i = 0; i < input.size(); i++)
    {
        int flag = true;
        for (int j = i - 1; j >= 0; j--)
        {
            if (input[i] == input[j])
            {
                flag = false;
                break;
            }
            else
            {
                continue;
            }
        }
        if (flag)
        {
            combinationSum(input, input[i], length - input[i], ans + to_string(input[i]), temp);
        }
    }
}
int main()
{
    vector<int> input;
    input.push_back(8);
    input.push_back(1);
    input.push_back(8);
    input.push_back(6);
    input.push_back(8);

    vector<string> temp;
    combinationSum(input, 0, 12, "", temp);
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << endl;
    }
    return 0;
}
