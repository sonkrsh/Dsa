#include <iostream>

using namespace std;

int findIndexMatch(int input_array[], int length, int identifier)
{
    int static counter = 0;
    if (input_array[counter] == identifier)
    {
        return counter;
    }
    if (length == counter)
    {
        return -1;
    }
    counter++;
    return findIndexMatch(input_array, length, identifier);
}
int main()
{
    int input_array[] = {1, 32, 4, 12, 32, 1, 1, 4, 66};
    int identifier = 4;
    int array_length = *(&input_array + 1) - input_array;
    cout << findIndexMatch(input_array, array_length - 1, identifier) << endl;
    return 0;
}