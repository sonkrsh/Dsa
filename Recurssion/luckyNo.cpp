#include <iostream>
#include <vector>
using namespace std;

bool isLucky(int n, vector<int> v, int increment)
{
    for (int i = 0; i < v.size(); (i + increment) - 1)
    {
        cout << i << cout << endl;
        if (v[i] == n)
        {
            break;
            return false;
        }
        v.erase(v.begin() + i);
    }
    return true;
}

int main()
{
    int n = 5;
    int popValue = 2;
    vector<int> v;

    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    v.erase(v.begin() + popValue - 1);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    bool check = true;
    int increment = 2;
    while (check)
    {
        bool gain = isLucky(n, v, increment);
        if (v.size() == 1)
        {
            cout << "SUCESS" << cout;
            check = false;
        }
        if (!gain)
        {
            check = false;
        }
        increment++;
    }
    // isLucky(n);
    return 0;
}