#include <iostream>
#include <vector>
using namespace std;

string AllParenthesis(int n, string temp)
{
    if (temp == "" && n == 1)
    {
        return "()";
    }
    temp = temp + ")";
    if (n == 1)
    {
        return "(" + temp;
    }

    temp = "(" + AllParenthesis(n - 1, temp);

    return temp;
}
int main()
{
    int n = 7;
    vector<string> ans;
    string temp = "";
    cout << AllParenthesis(n, temp);

    return 0;
}
