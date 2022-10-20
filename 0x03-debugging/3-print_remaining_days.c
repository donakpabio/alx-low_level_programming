#include <stdio.h>
#include "main.h"

/**
* is_leap_year - takes a date and prints how many days are
* left in the year, taking leap years into account
*@y: year
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
* _dim - takes a date and prints how many days are
* left in the year, taking leap years into account
*@m: day of month
*@y: year
* Return: Something
*/
int _dim(int m, int y)
{
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	return (m != 2 ? days[m - 1] : (is_leap_year(y) ? 29 : days[m - 1]));
}

/**
* _dbm - takes a date and prints how many days are
* left in the year, taking leap years into account
*@m: day of month
*@y: year
* Return: Something
*/
int _dbm(int m, int y)
{
	int i = 1;
	int d = 0;

	while (i < m)
	{
		d = d + _dim(i, y);
		i++;
	}
	return (d);
}

/**
* _dam - takes a date and prints how many days are
* left in the year, taking leap years into account
*@m: day of month
*@y: year
* Return: Something
*/
int _dam(int m, int y)
{
	int i = 12;
	int d = 0;

	while (i > m)
	{
		d = d + _dim(i, y);
		i--;
	}
	return (d);
}

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @m: month in number format
* @d: day of month
* @y: year
* Return: void
*/
void print_remaining_days(int m, int d, int y)
{
	int a = (m >= 1 && m <= 12);
	int b = (d >= 1 && d <= _dim(m, y));
	int c = (y >= 1000 && y <= 9999);

	if (a && b && c)
	{
		printf("Day of the year: %d\n", (_dbm(m, y) + d));
		printf("Remaining days: %d\n", ((_dim(m, y) - d) + _dam(m, y)));
	} else
	{
		printf("Invalid date: %02d/%02d/%04d\n", m, d, y);
	}
}
