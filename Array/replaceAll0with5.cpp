#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
    vector<int> v;
    double ans;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // v.push_back(5);
    sort(v.begin(), v.end());
    int vSize = v.size();

    if ((vSize - 1) % 2 == 0)
    {
        ans = v[(vSize - 1) / 2];
    }
    else
    {
        int indexVa = vSize / 2;
        cout << "SAd" << v[vSize / 2] << endl;
        cout << "ccc" << v[indexVa - 1] << endl;
        ans = v[indexVa] + v[indexVa - 1];
        ans /= 2;
    }
    cout << ans;
    return 0;
}