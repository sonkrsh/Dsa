#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;

int main()
{

    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    long long int k = 10;
    long long int Counter = 0;
    for (long long int j = 0; j < nums.size(); j++)
    {
        for (long long int i = 1; i <= k; i++)
        {
            if (i % nums[j] == 0)
            {
                cout << i << endl;
                Counter++;
                // break;
            }
        }
    }

    cout << Counter << endl;
    return 0;
}
