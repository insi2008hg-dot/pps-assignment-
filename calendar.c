#include <stdio.h>

int isLeapYear(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}

int getDaysInMonth(int month, int year)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 1 && isLeapYear(year))
        return 29;
    return days[month];
}

int getFirstDay(int year)
{
    int y = year - 1;
    return (1 + 5 * (y % 4) + 4 * (y % 100) + 6 * (y % 400)) % 7;
}

int main()
{
    char *months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};
    int year, month, day, start, days;

    printf("Enter the year: ");
    scanf("%d", &year);

    start = getFirstDay(year);
    printf("\n        CALENDAR FOR %d\n", year);

    for (month = 0; month < 12; month++)
    {
        days = getDaysInMonth(month, year);

        printf("\n ------------ %s ------------\n", months[month]);
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

        for (day = 0; day < start; day++)
            printf("     ");

        for (day = 1; day <= days; day++)
        {
            printf("%5d", day);
            if ((day + start) % 7 == 0)
                printf("\n");
        }

        start = (start + days) % 7;
        if (start != 0)
            printf("\n");
    }

    return 0;
}
