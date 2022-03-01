#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int n = 5;
    int P = 5;
    vector<int> arr;
    vector<int> ans;

    ans.assign(5, 0);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);

    for (int i = 0; i < n; i++)
    {
        ans[arr[i]] = ans[arr[i]] + 1;
    }

    for (int i = 1; i <= ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
