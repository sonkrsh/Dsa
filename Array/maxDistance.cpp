#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int handleMaxIndex(int A[], int n, vector<pair<int, int> > v)
{
    int i, j;
    // int maxdiff;
    // int LMin[n];
    // int RMax[n];
    int res = v[1].second - v[0].second;
    int minVal = v[0].second;

    for (i = 1; i < v.size(); i++)
    {

        res = max(res, v[i].second - minVal);
        minVal = min(minVal, v[i].second);
    }
    return res;
}
int main()
{
    int A[] = {6, 5, 4, 3, 2, 1};
    int n = 10;

    vector<pair<int, int> > v;

    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++)
    {
        v.push_back(make_pair(A[i], i));
    }
    sort(v.begin(), v.end());

    cout << handleMaxIndex(A, n, v);
    return 0;
}
