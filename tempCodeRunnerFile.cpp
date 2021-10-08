if ((((date[i + 1] - '0') * 10) + (date[i + 2] - '0')) > 20 && (((date[i + 1] - '0') * 10) + (date[i + 2] - '0')) < 50)
            {
                minute = 30;
                final_Time = date[i - 2] + date[i - 1] + ':' + 30;
            }
            if ((((date[i + 1] - '0') * 10) + (date[i + 2] - '0')) > 50)
            {
                minute = 00;
                final_Time = date[i - 2] + date[i - 1] + 1 + ':' + 00;
            }
            else
            {
                final_Time = date[i - 2] + date[i - 1] + ':' + 00;
            }