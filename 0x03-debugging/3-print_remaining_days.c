#include <stdio.h>
#include "main.h"

/**
* is_leap_year - takes a date and prints how many days are
* left in the year, taking leap years into account
* @y: year
* Return: Something
*/
int is_leap_year(int y)
{
        int d4 = (y % 4 == 0);
        int d100 = (y % 100 == 0);
        int d400 = (y % 400 == 0);

        return (d4 && !(d100 && !d400));
}

/**
* days_in_month - takes a date and prints how many days are
* left in the year, taking leap years into account
* @m: day of month
* @y: year
* Return: Something
*/
int days_in_month(int m, int y)
{
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	return (m != 2 ? days[m - 1] : (is_leap_year(y) ? 29 : days[m - 1]));
}

/**
* days_before_month - takes a date and prints how many days are
* left in the year, taking leap years into account
* @m: day of month
* @y: year
* Return: Something
*/
int days_before_month(int m, int y)
{
	int i = 1;
	int d = 0;

	while (i < m)
	{
		d = d + days_in_month(i, y);
		i++;
	}
	return (d);
}

/**
* days_in_year - takes a date and prints how many days are
* left in the year, taking leap years into account
* @y: year
* Return: Something
*/
int days_in_year(int y)
{
	return (is_leap_year(y) ? 366 : 365);
}

/**
* days_after_month - takes a date and prints how many days are
* left in the year, taking leap years into account
* @m: day of month
* @y: year
* Return: Something
*/
int days_after_month(int m, int y)
{
	int i = 12;
	int d = 0;

	while (i > m)
	{
		d = d + days_in_month(i, y);
		i--;
	}
	return (d);
}

/**
* days_remaining - takes a date and prints how many days are
* left in the year, taking leap years into account
* @d: month in number format
* @m: day of month
* @y: year
* Return: Something
*/
int days_remaining(int d, int m, int y)
{
	return ((days_in_month(m, y) - d) + days_after_month(m, y));
}

/**
* days_before - takes a date and prints how many days are
* left in the year, taking leap years into account
* @d: month in number format
* @m: day of month
* @y: year
* Return: Something
*/
int days_before(int d, int m, int y)
{
	return (days_before_month(m, y) + d);
}

/**
* is_valid - takes a date and prints how many days are
* left in the year, taking leap years into account
* @d: month in number format
* @m: day of month
* @y: year
* Return: Something
*/
int is_valid(int d, int m, int y)
{
	int a = (m >= 1 && m <= 12);
	int b = (d >= 1 && d <= days_in_month(m, y));
	int c = (y >= 1000 && y <= 9999);

	return (a && b && c);
}

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
	if (is_valid(day, month, year))
	{
		printf("Day of the year: %d\n", days_before(day, month, year));
		printf("Remaining days: %d\n", days_remaining(day, month, year));
	} else
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
}
