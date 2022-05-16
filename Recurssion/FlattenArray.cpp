#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

// void FlattenArray(vector<string> v, vector<string> &ans, int index)
// {
//     if (index == v.size())
//     {
//         return;
//     }

//     string value[] = v[index];

//     if (value)
//     {
//         FlattenArray(v, ans, index + 1);
//     }
// }

int main()
{
    // vector<string> v;
    // vector<string> ans;
    // FlattenArray(v, ans, 0);
    string sample[] = {"A", {"B"}};
    string check = sample[0];
    cout << check << endl;
    return 0;
}
