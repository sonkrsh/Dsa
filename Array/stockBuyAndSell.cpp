#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<vector<int> > stockBuySell(vector<int> A, int n)
{
    vector<vector<int> > ans;

    pair<int, int> minVal;
    minVal = make_pair(A[0], 0);

    for (int i = 1; i < A.size(); i++)
    {
        vector<int> v;
        if (A[i] > minVal.first)
        {
            cout << "ggg" << minVal.second << endl;
            v.push_back(minVal.second);
            v.push_back(i);
            ans.push_back(v);
        }
        else
        {
            int temp = min(A[i], minVal.first);
            if (temp <= minVal.first)
            {
                minVal = make_pair(A[i], i);
            }
        }
    }
    cout << ans.size();
    return ans;
}
int main()
{
    int temp[] = {100, 180, 260, 310, 40, 535, 695};
    int n = 7;
    vector<int> A;
    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++)
    {
        A.push_back(temp[i]);
    }

    stockBuySell(A, n);
    return 0;
}
