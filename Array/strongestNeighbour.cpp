#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int arr[] = {5, 5};
    vector<int> ans;
    for (int i = 0; i < 1; i++)
    {
        ans.push_back(max(arr[i], arr[i + 1]));
    }
    for (int i = 0; i < 1; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
