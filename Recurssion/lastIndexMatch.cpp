#include <iostream>

using namespace std;

int lastIndexMatch(int input_array[], int length, int identifier)
{
    if (input_array[length] == identifier)
    {
        return length;
    }
    if (length == -1)
    {
        return -1;
    }
    return lastIndexMatch(input_array, length - 1, identifier);
}
int main()
{
    int input_array[] = {1, 32, 4, 12, 32, 1, 1, 4, 66};
    int identifier = 1;
    int array_length = *(&input_array + 1) - input_array;
    cout << lastIndexMatch(input_array, array_length - 1, identifier) << endl;
    return 0;
}