#include <iostream>

using namespace std;

char replacePi(char input[], int length)
{
    if (input[length] == '\0')
    {
        cout << input << endl;
        return 'e';
    }

    if (input[length] == 'p' && input[length + 1] == 'i')
    {
        for (int i = strlen(input); i > length + 1; i--)
        {
            input[i + 2] = input[i];
        }
        input[length] = '3';
        input[length + 1] = '.';
        input[length + 2] = '1';
        input[length + 3] = '4';
    }
    return replacePi(input, length + 1);
}
int main()
{
    char sample_input[] = "pippppiiiipi";
    cout << replacePi(sample_input, 0) << endl;
    return 0;
}