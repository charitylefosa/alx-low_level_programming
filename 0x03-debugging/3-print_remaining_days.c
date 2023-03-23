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
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int days_remaining = 0;
	int i;

	if (month < 1 || month > 12)
	{
		printf("Invalid month: %d\n", month);
		return;
	}

	if (day < 1 || day > days_in_month[month - 1])
	{
		printf("Invalid day: %d\n", day);
		return;
	}

	days_remaining = 365 - day;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		days_in_month[1] = 29;
		days_remaining = 366 - day;
	}

	for (i = month; i <= 12; i++)
	{
		days_remaining += days_in_month[i - 1];
	}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", days_remaining);
}
