#include <iostream>
using namespace std;

void toh(int n, string s, string d, string a)
{
    if (n == 0)
    {
        return;
    }

    toh(n - 1, s, a, d);
    cout << "disk from " << s << " to " << d << endl;
    toh(n - 1, a, d, s);
}

int main()
{
    toh(4, "start", "destination", "aux");
    return 0;
}