#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "size of given Variable is " << ((char *)(&x + 1) - (char *)(&x));
    return 0;
}