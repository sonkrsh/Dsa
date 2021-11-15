#include <iostream>
#include <vector>
using namespace std;

void findPermutations(int start, int end, int size, string input, int tempCount, int fact, int current, vector<string> &ans, string org)
{

    if (start == (size - 1))
    {
        end = (size % start);
    }
    if (tempCount < fact)
    {

        swap(input[start], input[end]);
        ans.push_back(input);
        start = end;
        end++;
        tempCount++;
        findPermutations(start, end, size, input, tempCount, fact, current, ans, org);
        if (tempCount + 1 == fact)
        {
            if (current < size - 1)
            {
                input = org;
                current++;
                swap(input[0], input[current]);

                findPermutations(1, 2, size, input, 0, fact, current, ans, org);
                return;
            }
        }
        return;
    }
}
int fact(int i)
{
    if (i <= 1)
        return 1;
    else
        return i * fact(i - 1);
}
int main()
{
    string s = "SABHD";
    vector<string> ans;
    findPermutations(1, 2, s.size(), s, 0, fact(s.size() - 1), 0, ans, s);

    for (int i = 0; i <= ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
