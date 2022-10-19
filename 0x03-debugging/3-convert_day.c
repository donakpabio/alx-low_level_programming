#include "main.h"

/**
* days_before_month - takes a date and prints how many days are
* left in the year, taking leap years into account
* @m: day of month
* Return: Something
*/
int days_in_month(int m)
{
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	return (days[m - 1]);
}

/**
* days_before_month - takes a date and prints how many days are
* left in the year, taking leap years into account
* @m: day of month
* Return: Something
*/
int days_before_month(int m)
{
	int i = 1;
	int d = 0;

	while (i < m)
	{
		d = d + days_in_month(i);
		i++;
	}
	return (d);
}

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/
int convert_day(int month, int day)
{
	return (days_before_month(month) + day);
}
