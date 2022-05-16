#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void GroupReverse(int n, int k, int arr[], vector<int> &ans)
{
    for (int i = 0; i < n; i = i + k)
    {

        int checker = (k + i) - 1;
        if (checker >= n)
        {
            checker = n - 1;
        }

        while (checker >= i)
        {
            ans.push_back(arr[checker]);
            checker--;
        }
    }
}
int main()
{
    int n = 7;
    int k = 3;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    vector<int> ans;

    GroupReverse(n, k, arr, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
