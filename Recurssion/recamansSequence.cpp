#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    for (int i = 0; i < v.size(); i++)
    {
        v[1] = 0;
        cout << v[i] << endl;
    }

    return 0;
}
