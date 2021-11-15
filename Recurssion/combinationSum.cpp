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

        temp.push_back(stoi(ans));
        return;
    }

    for (int i = 0; i < input.size(); i++)
    {
        combinationSum(input, input[i], length - input[i], ans + to_string(input[i]), temp);
    }
}
int main()
{
    vector<int> input;
    input.push_back(6);
    input.push_back(5);
    input.push_back(7);
    input.push_back(1);
    input.push_back(8);
    input.push_back(2);
    input.push_back(9);
    input.push_back(9);
    input.push_back(7);
    input.push_back(7);
    input.push_back(9);
    vector<int> temp;
    combinationSum(input, 0, 6, "", temp);
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << endl;
    }
    return 0;
}
