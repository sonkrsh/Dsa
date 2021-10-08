#include <iostream>
using namespace std;

int main()
{
    string date = "04:22";
    int dateLength = date.length();
    int hour = 0;
    int minute = 0;
    char final_Time[] = {};
    for (int i = 0; i <= dateLength - 1; i++)
    {
        if (date[i] == ':')
        {
            hour = (((date[i - 2] - '0') * 10) + (date[i - 1] - '0'));
            final_Time[0] = date[i - 2];
            final_Time[1] = date[i - 1];

            if ((((date[i + 1] - '0') * 10) + (date[i + 2] - '0')) > 20 && (((date[i + 1] - '0') * 10) + (date[i + 2] - '0')) < 50)
            {
                minute = 30;
                final_Time[2] = ':';
                final_Time[3] = '3';
                final_Time[4] = '0';
            }
            if ((((date[i + 1] - '0') * 10) + (date[i + 2] - '0')) > 50)
            {
                minute = 00;
                /*  final_Time[0] = date[i - 2];
                final_Time[1] = date[i - 1]; */
                final_Time[2] = ':';
                final_Time[3] = '0';
                final_Time[4] = '0';
            }
            else
            {
                final_Time[2] = ':';
                final_Time[3] = '0';
                final_Time[4] = '0';
            }
        }
    }
    cout << final_Time << endl;

    return 0;
}