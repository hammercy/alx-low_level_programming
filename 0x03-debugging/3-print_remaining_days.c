#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days ;

	days = convert_day(month, day);
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		if (month > 2 )
		{
			days++;
		}

		printf("Day of the year: %d\n", days);
		printf("Remaining days: %d\n", 366 - days);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("invalid date:%02d/%02d/%04d\n", month, day, year);

		}
		else
		{
			printf("Day of the year: %d\n", days);
			printf("Remaining days: %d\n", 365 - days);
		}
	}
}
