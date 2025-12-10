#include <main.h>

int check_valid_date(int d, int m, int y)
{
    int flag = 1;
    int isleap = 0;

    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        isleap = 1;

    if (y <= 1850 || y >= 2100)
        flag = 0;

    else if (m < 1 || m > 12)
        flag = 0;

    else if (d < 1)
        flag = 0;

    else if (m == 2)
    {
        if (d > 29) flag = 0;
        else if (d == 29 && !isleap) flag = 0;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (d > 30) flag = 0;
    }
    else if (d > 31) flag = 0;

    if (flag == 0)
    {
        printf("%d/%d/%d is an Invalid Date\n", d, m, y);
        printf("Please Enter a Valid Date\n");
    }

    return flag;
}
