#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void combinationSum(vector<int> &input, int perticular, int length, string ans, vector<int> &temp)
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
            temp.push_back(input[i]);
            combinationSum(input, input[i], length - input[i], ans + to_string(input[i]), temp);
        }
    }
}
int main()
{
    vector<int> input;
    input.push_back(7);
    input.push_back(2);
    input.push_back(7);
    input.push_back(6);
    input.push_back(5);
    vector<int> temp;
    sort(input.begin(), input.end());
    input.erase(unique(input.begin(), input.end()), input.end());
    //combinationSum(input, 0, 16, "", temp);
    for (int i = 0; i < input.size(); i++)
    {
        cout << input[i] << endl;
    }
    return 0;
}
