#include <iostream>
#include <vector>
using namespace std;

void largestKswap(string input, int k, int current)
{
    cout << "hello" << current << endl;
    if (current == input.size())
    {
        return;
    }
    //cout << input << endl;
    for (int i = current; i < input.size(); i++)
    {
        cout << current << "==>>" << i << endl;
        swap(input[current], input[i]);
        largestKswap(input, k, current + 1);
        //swap(input[current], input[i]);
    }
}
int main()
{
    string n = "1234567";
    int k = 4;
    largestKswap(n, k, 0);
    return 0;
}
