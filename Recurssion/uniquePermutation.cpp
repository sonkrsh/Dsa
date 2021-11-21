#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void uniquePermutation(int starting, vector<int> &input, vector<int> &ans, vector<vector<int> > &hashTable)
{
    if (ans.size() == input.size())
    {
        hashTable.push_back(ans);
        return;
    }

    for (int i = starting; i < input.size(); i++)
    {
        swap(input[starting], input[i]);
        ans.push_back(input[starting]);
        uniquePermutation(starting + 1, input, ans, hashTable);
        swap(input[starting], input[i]);
        ans.pop_back();
    }
}
int main()
{
    vector<int> input;
    vector<int> ans;
    vector<vector<int> > hashTable;
    input.push_back(1);
    input.push_back(1);
    input.push_back(2);
    input.push_back(1);
    uniquePermutation(0, input, ans, hashTable);
    sort(hashTable.begin(), hashTable.end());
    hashTable.erase(unique(hashTable.begin(), hashTable.end()), hashTable.end());

    for (int i = 0; i <= hashTable.size() - 1; i++)
    {
        for (int j = 0; j < hashTable[i].size(); j++)
            cout << hashTable[i][j] << " ";
        cout << endl;
    }
}
